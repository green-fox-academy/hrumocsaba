#include <iostream>
using namespace std;
int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8
    srand(time(NULL));
    int r = rand() %100;
    int in;
    do {
        cout << "Guess!" << endl;
        cin >> in;
        if (in < r) {
            cout << "The stored number is higher" << endl;
            in=1;
        }
        if (in>r){
            cout<<"The stored number is lower"<<endl;
            in=1;
        }

    }while (in!=r);
    cout<< "The number was ";
    cout<<r;

    return 0;
}