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

    ifstream decrypt;
    decrypt.open("C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/decrypt.txt");
    if(!decrypt.is_open()){
        std::cout<<"file is not open"<<endl;
        return 15;
    }

    while (getline(decrypt,line)){
        //istringstream stringparser(line);

        //while (getline(stringparser, word, ' ')){
        for (int i = 0; i < line.size(); i+=2) {
            cout << line[i];
            //}
        }
        cout<<endl;
    }
    return 0;
}

