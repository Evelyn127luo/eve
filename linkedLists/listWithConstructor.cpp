#include <iostream>
using namespace std;

struct Node {
	double data;
	Node* next;

	//constructor
	Node(double data, Node* next = NULL) {
		this->data = data;
		this->next = next;
	}
};

int main() {
	Node* third = new Node(3);
	Node* second = new Node(2, third);
	Node* head = new Node(1, second);

	//step 4
	Node* temp = head; //temporary pointer pointing to the head
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	//step 5
	delete head;
	delete second;
	delete third;
}
