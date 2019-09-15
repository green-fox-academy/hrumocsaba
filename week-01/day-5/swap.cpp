#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`
    string abc[3]={"first", "second","third"};
    string mem;
    mem=abc[0];
    abc[0]=abc[2];
    abc[2]=mem;
    for (int i = 0; i < 3; ++i) {
        cout<<abc[i]<<" ";
    }

    return 0;
}