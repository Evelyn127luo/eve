#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList;           // empty list
    list<int> l = {10, 20, 30}; // initialize values
    list<int> l2(5, 100);       // 5 elements, each = 100

    // using iterator
    auto it = l.begin();
    cout << *it; // prints 10, its an object pointer (iterator)

    // adding removing elements

    myList.push_back(10); // add at the end
    myList.push_front(5); // add at the beginning
    myList.push_back(20);

    myList.pop_front(); // removes first
    myList.pop_back();  // removes last element

    // iterating through a list

    for (int x : myList)
    {
        cout << x << " ";
    }

    // inserting and deleting
    auto that = myList.begin();
    advance(that, 1);      // move iterator to 2nd postion
    myList.insert(it, 15); // insert before position

    // iterate after insert
    for (int x : myList)
    {
        cout << x << " ";
    }

    that = myList.begin();
    advance(that, 2);
    myList.erase(that); // removes element at that position
    // iterate after erase
    for (int x : myList)
    {
        cout << x << " ";
    }

    list<int> l3;

    l3.push_front(10);
    l3.push_back(20);
    l3.push_back(30);

    // iterator
    cout << "First iteration: " << endl;
    for (int x : l3)
    {
        cout << x << " ";
    }

    auto it = l3.begin(); // point to beginning of container

    // inserting between 20 and 30

    advance(it, 2);
    l3.insert(it, 15);
    cout << endl
         << "\nSecond iteration: " << endl;
    for (int x : l3)
    {
        cout << x << " ";
    }
    cout << endl;
}