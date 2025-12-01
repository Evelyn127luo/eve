#include <iostream>
using namespace std;
//step 1
struct Node {
    double data;
    Node* next; //pointer to structure
};

int main()
{
    //step 2
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    //step 3
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;
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

//to access data members: objects use dot, pointers use arrow