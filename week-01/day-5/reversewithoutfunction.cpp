#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj [5]={3,4,5,6,7};
    int mem1;
    int mem2;
    for (int i = 0; i <= 5/2; ) {
        for (int j = 5-1; j >= 5/2 ; --j) {
            mem1 = aj[i];
            mem2 = aj[j];
            aj[i] = mem2;
            aj[j] = mem1;
            i++;
        }

    }
    for (int k = 0; k <5 ; ++k) {
        cout<< aj[k]<<" ";

    }
    return 0;
}