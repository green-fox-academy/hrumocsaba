#include <iostream>
#include <string>
using namespace std;

string reverse(const string& text)
{
    string forv=text;
    char swap;
    int i = 0;
    for (int j = text.length()-1; j >= 0 ; --j) {
        forv.at(i)=text.at(j);
        i++;
    }

    cout<<endl;
    return forv;
}

int main(int argc, char* args[])
{
    string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    cout << reverse(reversed) << endl;


    return 0;
}