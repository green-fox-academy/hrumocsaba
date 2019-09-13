#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void printDistinct(int arr[], int n)
{
    // Pick all elements one by one
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            cout << arr[i] << " ";
    }
}


int main(int argc, char* args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    //int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    int x;
    cout<<"lenght"<<endl;
    cin>>x;
    int y;

    int num;
    int numbers[x];
    int justone[y];
    for (int i = 0; i <x ; ++i) {
        cout << "number " << i + 1 << endl;
        cin >> num;
        numbers[i] = num;
    }


    sort(numbers, numbers+x);
    unique(numbers, numbers+x);


    cout<<"[";
    for (int j = 0; j < x ; ++j) {

        cout<<numbers[j]<<",";
        //cout<<justone[j]<<",";

    }
    cout<<"]"<<endl;


    printDistinct(numbers, x);

    return 0;
}

