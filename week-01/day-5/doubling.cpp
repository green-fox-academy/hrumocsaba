#include <iostream>
#include <string>
using namespace std;

int doubling(int&);
int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`
    int baseNum=123;
    doubling(baseNum);
    cout<<baseNum;

    return 0;
}
int doubling(int& x){
    x=x*2;
}