
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double registerCash, totalIncome, totalTax, postPST, postGST;
    string month;
    int year;
    double PST = 0.08;
    double GST = 0.05;

    cout << "Please enter the current month: ";
    cin >> month;

    cout << "\nPlease enter the current year: ";
    cin >> year;

    cout << "\nPlease enter the total amount of cash collected from the register: ";
    cin >> registerCash;

    totalIncome = registerCash + (registerCash * PST) + (registerCash * GST);
    totalTax = totalIncome - registerCash;
    postPST = registerCash * PST;
    postGST = registerCash * GST;

    cout << "-----------------------------------------------" << endl;
    cout <<  "DATE: " << month << ", " << year << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Total collected: \t\t $ " << totalIncome << endl;
    cout << "Sales: \t\t\t\t $ " << registerCash << endl;
    cout << "Federal Sales tax (GST): \t $ " << postGST << endl;
    cout << "Provincial Sales tax (PST): \t $ " << postPST << endl;
    cout << "Total Sales tax (GST): \t\t $ " << totalTax << endl;
    cout << "-----------------------------------------------" << endl;

    return 0;
}

