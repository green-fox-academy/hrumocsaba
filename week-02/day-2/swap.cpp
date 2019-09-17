#include <iostream>
using namespace std;

void *swap(int* a, int* b){
    int* ap;
    int* bp;
    int c;
    int* cp=&c;

    cp=ap;
    ap=bp;
    bp=cp;
}

int main ()
{
    // Create a function which swaps the values of 'a' and 'b' variables.
    // This time use a void function and pointers.

    int a = 10;
    int b = 316;
    cout<<a<<", "<<b<<endl;
    swap(a,b);
    cout<<a<<", "<<b<<endl;

    return 0;
}