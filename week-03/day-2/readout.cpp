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
    myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try{
        myFile.open("my-file.txt");
        string text;
        getline(myFile,text);
        cout<<text<<endl;
        myFile.close();

    }catch (ifstream::failure& e){
        cout << e.what() << endl;
    }
    return 0;
}
