#include <iostream>
#include <string>
using namespace std;

struct Node {
	string name;
	string phone;
	Node* next;

	//constructor
	Node(string name, string phone, Node* next = NULL) {
		this->name = name;
		this->phone = phone;
		this->next = next;
	}
};

void printList(Node* head) {
	Node* temp = head; //temporary pointer pointing to the head
	while (temp != nullptr) {
		cout << temp->name << " \t" << temp->phone << endl;
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	Node* third = new Node("Lanfrank, John", "(555)718-4581");
	Node* second = new Node("Dolan, Edith", "(555)682-3104", third);
	Node* head = new Node("Acme, Sam", "(555)898-2392", second);

	delete head;
	delete second;
	delete third;
}
