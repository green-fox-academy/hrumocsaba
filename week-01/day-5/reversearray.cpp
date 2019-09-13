#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj[5]={3,4,5,6,7};
    reverse(begin(aj), end(aj));
    for (int i = 0; i < 5; ++i) {
        cout<<aj[i]<<" ";
    }


    return 0;
}

