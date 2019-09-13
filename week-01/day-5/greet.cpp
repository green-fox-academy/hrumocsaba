#include <iostream>
#include <string>
using namespace std;
string greet(string&);

int main(int argc, char* args[]) {

    // - Create a string variable named `al` and assign the value `Green Fox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Green Fox`
    // - Greet `al`
    string al;
    cout<<"Your name?"<<endl;
    cin>>al;
    greet(al);

    return 0;
}
string greet(string& al){
    cout<<"Greetings dear, "<< al<<endl;
};