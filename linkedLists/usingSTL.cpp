#include <iostream>
#include <string>
#include <list>
using namespace std;
struct Student {
	int id;
	string name;
	double gpa;
};


int main() {
	list<Student> studentRecord;

	Student std1  = { 1, "Student_Name", 3.45};
	Student std2 = { 2, "Student_Again", 4.50 };
	
	//adding struct objects into the list
	studentRecord.push_back(std1);
	studentRecord.push_back(std2);

	//iteration using auto
	for (auto x : studentRecord) {
		cout << x.id << " , " << x.name << " , " << x.gpa << "\n";
	}

	cout << "\nIteration using tradition iterator: \n";

	//iteration using tradition iterator type, this loop only prints "GPA"
	for (list<Student>::iterator it = studentRecord.begin();
		it != studentRecord.end(); ++it) {
		cout << "GPA: " << it->gpa << endl;
	}

	cout << "\nMerging 2 lists together: " << endl;
	//merging list

	list<int> l1, l2;
	int a1[] = { 40, 30, 20, 10 };
	int a2[] = { 15, 20, 25, 30, 35 };

	for (int i = 0; i < 4; i++) {
		l1.push_back(a1[i]);
	}

	for (int x = 0; x < 5; x++) {
		l2.push_back(a2[x]);
	}

	l1.reverse(); //reorganizing into reverse order
	l1.merge(l2);
	l1.unique(); //removes duplicates

	auto it = l1.begin();
	while (it != l1.end()) {
		cout << *it << "\t";
		it++;
	}
	cout << endl;
}