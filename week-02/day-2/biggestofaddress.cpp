#include <iostream>
using namespace std;

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int a;
    cout<<"how many?"<<endl;
    cin>>a;
    int nums[a];
    for (int i = 0; i < a; ++i) {
        cin>>nums[i];
    }
    int c=nums[0];
    int i=0;
    for (int j = 1; j < a; ++j) {
        if (nums[i]<nums[j]){
            c=nums[j];
            i=j;
        }
    }
    cout<<&c<<":"<<c;
    return 0;
}