// Created by Evelyn Luo
// CIS 163 Assignment 2
// started: 1/18/2025

#include <iostream>
using namespace std;

int main()
{
    cout << "*************************************************\n\n\n"; //for aesthetic only, seen throughout code

    //Q13 Gross Pay
    cout << "Q13 gross pay calculator \n\n";

    double salary = 39000; //given anual pay from problem
    double biWeeklyPay, semiMonthlyPay; //store gross pay calculations

    biWeeklyPay = salary / 26; //biweekly pay consists of 26 paycheks per year

    semiMonthlyPay = salary / 24; //semimonthly pay consists of 24 paychecks per year

    cout << "If an employee gets paid " << salary << " annually, then they will get paid " << biWeeklyPay << " biweekly and "
        << semiMonthlyPay << " semimonthly before tax.\n\n\n";


    cout << "*************************************************\n\n\n";
    
    //Q14 Height Conversion
    cout << "Q14 Height conversion calculator \n\n";

    auto height = 75; //height is an int because it has no decimal point, number given in problem
    int feet, inches; //store height calculations

    feet = height / 12; //calculates feet
    inches = height % 12; //modulos calculates reminder which is used for the inches

    cout << "The star player's height is " << feet << " foot and " << inches << " inches tall.\n\n\n";

    cout << "*************************************************\n\n\n";

    //Q18 Futurw Ocean Levels
    cout << "Q18 Future Ocean level calculator \n\n";

    int yearPassed = 15;
    float avgRate = 3.3;
    float oceanMilli, oceanCenti, oceanInch; //i made a variable for millimeters since the given rate is in millimeters


    oceanMilli = yearPassed * avgRate; //for every 1 year the ocean levels rise by 3.3 mm so we multiply future years passed
    //(cont.) by 3.3mm.

    cout << "When " << yearPassed << " years pass, the ocean levels will rise " << oceanMilli << " inches if it keeps increasing at an average rate of approximately " << 
        avgRate << " millimeters per year. \n\n"; //this ´rint statement is to check if the first conversion was done properly, it is not required for th problem

    oceanCenti = oceanMilli / 10; //for every 1 cm there are 10 mm
    oceanInch = oceanMilli / 25.4; //for every 1 inch there are 25.4mm



    cout << "When " << yearPassed << " years pass, the ocean levels will rise " << oceanCenti << " centimeters or "
        << oceanInch << " inches if it keeps increasing at an average rate of approximately " << avgRate << " millimeters per year.\n\n";


    cout << "*************************************************\n\n\n";

    return 0; //last edited january 19th, 2025 by Evelyn Luo
}

