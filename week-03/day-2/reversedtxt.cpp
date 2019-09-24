#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main() {
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.
    string word;
    string line;
    map<char,int> mymap;

    ifstream reverse;
    reverse.open("C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/reversed.txt");
    if(!reverse.is_open()){
        std::cout<<"file is not open"<<endl;
        return 15;
    }

    while (getline(reverse, line)){
        istringstream stringparser(line);
        for (int i = line.size(); i >= 0; i--) {
            cout << line[i];
            }
        cout<<endl;
    }
    return 0;
}

