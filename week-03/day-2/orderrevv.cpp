#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
using namespace std;
int main() {
    // Create a program that decrypts the file called "duplicated-chars.txt",
    // and pritns the decrypred text to the terminal window.

    string line;
    ifstream orderrev;
    orderrev.open("C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/orderrev.txt");
    if(!orderrev.is_open()){
        std::cout<<"file is not open"<<endl;
        return 15;
    }
    vector<string> rev;
    while (getline(orderrev, line)){
        rev.push_back(line);
    }
    
    for (int i = rev.size()-1; i > 0; --i) {
        cout<<rev[i]<<endl;
    }
    return 0;
}

