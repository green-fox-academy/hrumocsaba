#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //bmi calculator
    double massInKg ;
    double heightInM ;
    char repeat = 'y';
    while( repeat == 'y') {
        cout << "Your wieght in kg?" << endl;
        cin >> massInKg;
        cout << "Your height in meter?" << endl;
        cin >> heightInM;
        double bmi = massInKg / (heightInM * heightInM);
        cout << bmi << endl;
        if (bmi <= 18.4) {
            cout << "You are underweight." << endl;
        }
        if (18.5 <= bmi && bmi <= 24.9) {
            cout << "You are ideal weight." << endl;
        }
        if (25 <= bmi && bmi <= 29.9) {
            cout << "You are overweight." << endl;
        }
        if (bmi >= 30) {
            cout << "You are obese." << endl;
        }
        cout<< "Do you want to repeat?(y/n):";
        cin>> repeat;
    }
    return 0;
    }








