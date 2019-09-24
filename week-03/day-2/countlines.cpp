#include <iostream>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file first.
        ifstream myFile;
    //myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

        myFile.open("my-file.txt");
        string text;
        int lines=0;
        while (getline (myFile, text)) {
            cout << text << endl;
            lines++;
        }
        cout<<lines<<" lines"<<endl;
        myFile.close();

    return 0;
}

