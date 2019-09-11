#include <iostream>
using namespace std;
int main(int argc, char* args[]) {

    // Write a program that prints the numbers from 1 to 100.
    // But for multiples of three print “Fizz” instead of the number
    // and for the multiples of five print “Buzz”.
    // For numbers which are multiples of both three and five print “FizzBuzz”.
    for (int i = 1; i < 101; ++i) {
        if(i%5==0 && i%3==0){
            cout << "fizz buzz" <<endl;
        }
        else if (i%3==0){
            cout << "fizz" <<endl;
        }
        else if(i%5==0){
            cout << "buzz" <<endl;
        }

        else{
            cout << i << endl;
        }


    }

    return 0;
}