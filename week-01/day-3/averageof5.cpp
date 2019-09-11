#include <iostream>
using namespace std;

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int a;
    int b;
    int c;
    int d;
    int e;
    int avg;
    char repeat='y';
    while(repeat=='y') {
        cout << "First number?" << endl;
        cin >> a;
        cout << "Second number?" << endl;
        cin >> b;
        cout << "Third number?" << endl;
        cin >> c;
        cout << "Fourth number?" << endl;
        cin >> d;
        cout << "Fifth number?" << endl;
        cin >> e;
        avg = (a + b + d + d + e) / 5;
        cout << "The average is: ";
        cout << avg << endl;
        cout << "Repeat process? (y/n)" << endl;
        cin >> repeat;
    }

    return 0;
}