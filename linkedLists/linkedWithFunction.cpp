#include <iostream>
using namespace std;

struct Node {
	double data;
	Node* next;
};

//traversing
void printList(Node* head) {
	Node* temp = head; //temporary pointer, points to head
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//insertion at the beginning:
void insertAtBegin(Node*& head, int newData) {
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = head;
	head = newNode;
}

//insert at the end
void insertAtEnd(Node*& head, int newData) {
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = nullptr;

	if (head == nullptr) { //if list is empty
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}

	temp->next = newNode;
}

//insert after a given node
void insertAfter(Node* prevNode, int newData) {
	if (prevNode == nullptr) {
		cout << "Previous node cannot be NULL" << endl;
		return;
	}
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = prevNode->next;
	prevNode->next = newNode;
}

//deletion
void deleteNode(Node*& head, int key) {
	Node* temp = head;
	Node* prev = nullptr;

	//if head node itself holds the key
	if (temp != nullptr && temp->data == key) {
		head = temp->next;
		delete temp;
		return;
	}

	//search for the key
	while (temp != nullptr && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}

	if (temp == nullptr) { //not found
		return;
	}

	prev->next = temp->next;
	delete temp;
}

int main() {
	Node* head = nullptr; //empty list

	insertAtEnd(head, 10);
	insertAtEnd(head, 20);
	insertAtEnd(head, 30);
	printList(head);

	insertAtBegin(head, 5);
	printList(head);

	insertAfter(head->next, 15);
	printList(head);

	deleteNode(head, 0);
}