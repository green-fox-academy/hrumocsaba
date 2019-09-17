#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    string name = "Bob";
    int* ap= &a;
    double *bp= &b;
    string* namep=&name;
    cout<<ap<<": "<<*(ap)<<", "<<bp<<": "<<*(bp)<<","<<namep<<": "<<*(namep)<<endl;
    *(ap)=23;
    cout<<ap<<": "<<*(ap)<<endl;
    double sum=*(ap)+*(bp);
    cout<<sum<<endl;

    return 0;
}