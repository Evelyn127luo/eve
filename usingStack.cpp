#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack size: " << s.size() << endl; // 3 elements
    cout << "Top element: " << s.top() << endl; // 30 last in, so its first out

    // pop element
    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    // check if empty
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}