#include <iostream>
using namespace std;
int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int nums[5];
    int* numsp=&nums[0];


    for (int i = 0; i < 5; ++i) {
        cin>>nums[i];
    }
    for (int j = 0; j < 5; ++j) {
        cout<<*(numsp+j)<<endl;
    }

    return 0;
}