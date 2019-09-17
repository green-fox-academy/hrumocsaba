#include <iostream>
using namespace std;
int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int nums[5];
    for (int i = 0; i < 5; ++i) {
        cin>>nums[i];
    }
    for (int j = 0; j < 5; ++j) {
        cout<<&nums[j]<<endl;
    }

    return 0;
}