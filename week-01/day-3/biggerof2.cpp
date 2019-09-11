#include <iostream>
using namespace std;
int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one
    double a;
    double b;
    double big;
    cout << "First number: " << endl;
    cin >> a ;
    cout << "Second number: " << endl;
    cin >> b ;
    if(a>b){
        cout << "Bigger number is: " << endl;
        cout << a ;
    }
    if (b>a){
        cout << "Bigger number is: " << endl;
        cout << b ;
    }




    return 0;
}