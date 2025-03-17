#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const double PI = 3.14159;
    int option;
    double a, b, ans;

    cout << "Would you like to calculate the area of:\n\n" << "1. A circle \n2.A Rectangle \n3.A triangle \n4.Quit"
        << "\n\nYour choice: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "\nPlease enter the radius: ";
        cin >> a;
        ans = PI * (a * a);
        cout << "\nA = πr^2, so A = " << ans;
        break;
    case 2:
        cout << "\nPlease enter the length: ";
        cin >> a;
        cout << "\nPlease enter the witdh: ";
        cin >> b;
        ans = a*b;
        cout << "\nA = a*b, so A = " << ans;
        break;
    case 3:
        cout << "\nPlease enter the base: ";
        cin >> a;
        cout << "\nPlease enter the height: ";
        cin >> b;
        ans = (a*b)/2;
        cout <<"\nA = (a*b)/2, so A = " << ans;
        break;

    case 4:
        cout << "Thank you for using the program!";
        break;

    default:
        cout << "Thank you for using the program!";
        break;
    }

}