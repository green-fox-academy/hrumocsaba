#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print "p2 is longer" if `p2` has more elements than `p1`
    int p1[] = {1,2,3};
    int p2[] = {4,5,5,6,7};
    if ((sizeof(p1)/ sizeof(p1[0]))<(sizeof(p2)/ sizeof(p2[0]))){
        cout<<"p2 is longer"<<endl;
    } else{
        cout<<"p1 is longer"<<endl;
    }

    return 0;
}