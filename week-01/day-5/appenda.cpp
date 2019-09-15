#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end
    string animals[]={"koal","pand","zebr"};
    for (int i = 0; i < sizeof(animals)/ sizeof(animals[0]) ; ++i) {
        animals[i]+="a";
        cout<<animals[i]<<" ";
    }

    return 0;
}