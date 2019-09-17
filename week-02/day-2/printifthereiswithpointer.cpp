#include <iostream>
using namespace std;

int give(int *arr,int *a,int size){

    for (int* i=arr;i != arr+size;i++) {
        if(*i==*a){
            return i-arr;
        }
    }
    return -1;
}


int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1
    int arr[5]={1,4,3,4,5};
    int num=4;
    cout<<give(arr, &num, 5);

    return 0;
}