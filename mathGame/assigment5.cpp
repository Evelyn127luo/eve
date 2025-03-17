#include <iostream>
using namespace std;
int main() {
    int optADD, optSUB, optDIV, optMULT;
    int selection, questions, num1, num2, ber1, ber2, answer; //"num" vars are used for correct, "ber" is when the answer is incorrect
    int wins = 0, loses = 0;
    double score;

    cout << "What game mode would you like to play? PLEASE SELECT THE NUMBER" <<
    "\n\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division" << "\n\nYour answer: ";

    cin >> selection;
    
    cout << "How many questions would you like to anser? (5 to 15 questions): ";
    cin >> questions;//question counter


    if(selection == 1 && questions >= 5) { //could've done a nested if but there are already many other nested loops
        cout << "\nWARNING!! \n\nPlease answer in whole numbers. \n\nIf the answer is a decimal, just place the whole number." 
            << "\nExample: if the answer is 0.5, answer with 0.\n" ;
        for(int i = 1; i <= questions ;i++){
            num1 = (rand()%(0 - 9 + 1)) + 0;
            num2 = (rand()%(0 - 9 + 1)) + 0;
            ber1 = num1; //stores previous num value when needed to retry
            ber2 = num2;

            optADD = num1 + num2;
            cout << "\n\nProblem number " << i;
            cout << "\nWhat is " << num1 << " plus " << num2 << " equal to? ";
            cin >> answer;

            if(answer == optADD){
                cout << "\nGood job!!\n";
                wins++;
            }
            else{
                
                do{
                    i++;
                    loses++;
                    optADD = ber1 + ber2; //will keep previous random numbers
                    cout << "\nPlease try again! ";
                    cout << "\n\nProblem number " << i;
                    cout << "\nWhat is " << ber1 << " plus " << ber2 << " equal to? ";
                    cin >> answer;
                }while(answer != optADD && i <= questions); //allows code to run until max question if answer is always false
                
                if(answer == optADD){//counts a win if user gets it right
                    cout << "\nGood job!!\n";
                    wins++;
                }
            }
        }
    }
    else if(selection == 2 && questions >= 5){
        cout << "\nWARNING!! \n\nPlease answer in whole numbers. \n\nIf the answer is a decimal, just place the whole number." 
            << "\nExample: if the answer is 0.5, answer with 0.\n" ;
        for(int i = 1; i <= questions ;i++){
            num1 = (rand()%(0 - 9 + 1)) + 0;
            num2 = (rand()%(0 - 9 + 1)) + 0;
            ber1 = num1;
            ber2 = num2;

            optSUB = num1 - num2;//changes type of problem
            cout << "\n\nProblem number " << i;
            cout << "\nWhat is " << num1 << " minus " << num2 << " equal to? ";//change
            cin >> answer;

            if(answer == optSUB){//change
                cout << "\nGood job!!\n";
                wins++;
            }
            else{
                do{
                    i++;
                    loses++;
                    optSUB = ber1 - ber2;//changes type of problem
                    cout << "\nPlease try again! ";
                    cout << "\n\nProblem number " << i;
                    cout << "\nWhat is " << ber1 << " minus " << ber2 << " equal to? ";//change
                    cin >> answer;
                }while(answer != optSUB && i <= questions);//change
                
                if(answer == optSUB){//change
                    cout << "\nGood job!!\n";
                    wins++;
                }
            }
        }
    }
    else if(selection == 3 && questions >= 5){
        cout << "\nWARNING!! \n\nPlease answer in whole numbers. \n\nIf the answer is a decimal, just place the whole number." 
            << "\nExample: if the answer is 0.5, answer with 0.\n" ;
        for(int i = 1; i <= questions ;i++){
            num1 = (rand()%(0 - 9 + 1)) + 0;
            num2 = (rand()%(0 - 9 + 1)) + 0;
            ber1 = num1;
            ber2 = num2;

            optMULT = num1 * num2;//changes type of problem 
            cout << "\n\nProblem number " << i;
            cout << "\nWhat is " << num1 << " times " << num2 << " equal to? ";//change
            cin >> answer;

            if(answer == optMULT){//change
                cout << "\nGood job!!\n";
                wins++;
            }
            else{
                do{
                    i++;
                    loses++;
                    optMULT = ber1 * ber2;//changes type of problem
                    cout << "\nPlease try again! ";
                    cout << "\n\nProblem number " << i;
                    cout << "\nWhat is " << ber1 << " times " << ber2 << " equal to? ";//change
                    cin >> answer;
                }while(answer != optMULT && i <= questions);//change
                
                if(answer == optMULT){//change
                    cout << "\nGood job!!\n";
                    wins++;
                }
            }
        }
    
    }
    else if(selection == 4 && questions >= 5 ){
        cout << "\nWARNING!! \n\nPlease answer in whole numbers. \n\nIf the answer is a decimal, just place the whole number." 
            << "\nExample: if the answer is 0.5, answer with 0.\n" ;

        for(int i = 1; i <= questions ;i++){
            num1 = (rand()%(0 - 9 + 1)) + 0;
            num2 = (rand()%(0 - 9 + 1)) + 0;
            ber1 = num1;
            ber2 = num2;

            optDIV = num1 / num2;//changes type of problem 
            cout << "\n\nProblem number " << i;
            cout << "\nWhat is " << num1 << " divided by " << num2 << " equal to? ";//change
            cin >> answer;

            if(answer == optDIV){//change
                cout << "\nGood job!!\n";
                wins++;
            }
            else{
                do{
                    i++;
                    loses++;
                    optDIV = ber1 / ber2;//changes type of problem
                    cout << "\nPlease try again! ";
                    cout << "\n\nProblem number " << i;
                    cout << "\nWhat is " << ber1 << " divided by " << ber2 << " equal to? ";//change
                    cin >> answer;
                }while(answer != optDIV && i <= questions);//change
                
                if(answer == optDIV){//change
                    cout << "\nGood job!!\n";
                    wins++;
                }
            }
        }
    
    }

    else {
        cout << "\nYou have entered an invalid game option, please run the program again!";
    }

    score = (double)wins / (double)questions * 100;
    cout << "\nYOU SCORED: " << score ;
    cout << "\nWINS: " << wins << " | LOSES: " << loses << endl;
    

}
