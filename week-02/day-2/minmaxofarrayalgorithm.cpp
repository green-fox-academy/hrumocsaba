#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int *min(int arr[],int size){

    int i = 0;
/*
    for (int j = 1; j < size; j++) {
        if (arr[i]>arr[j]){
            i=j;
        }
    }
*/
    int *minptr = &arr[0];

    for (int j = 1; j < size; j++) {
        if (*minptr < arr[j]){
            minptr = &arr[j];
        }
    }

    return minptr;
}

int main()
{
    int numbers[] = {11,7,15,1,13,6,4};
    int size= (sizeof(numbers)/ sizeof(numbers[0]));
    cout<<*min(numbers, size);


    return 0;
}