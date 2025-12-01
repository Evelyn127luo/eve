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
	list<Student> stdRecord;

	stdRecord.push_back({ 1, "John", 3.73 });
	stdRecord.push_back({ 2, "Jane", 4.32 });
	stdRecord.push_back({ 3, "Rupert", 6.77 });
	stdRecord.push_back({ 4, "Mona", 9.10 });

	for (auto x : stdRecord) {
		cout << "Student #" << x.id << " , " << x.name << " , " << x.gpa << endl;
	}

	auto it = stdRecord.begin();
	advance(it, 2);
	stdRecord.erase(it);

	//iteration after erasing
	cout << "\nErasing rupert: \n";
	for (auto x : stdRecord) {
		cout << "Student #" << x.id << " , " << x.name << " , " << x.gpa << endl;
	}
}