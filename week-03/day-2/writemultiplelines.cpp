#include <iostream>
#include <exception>
#include <fstream>
#include <string>
using namespace std;


// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"
int write(string path, string word, int lines){
    ofstream myFile;
    myFile.open(path);
    if(myFile.is_open()){
        for (int i = 0; i < lines; ++i) {
            myFile<<word<<endl;
        }
    }else{
            return-1;
        }
        myFile.close();

};

int main() {
    string path="C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/myFile.txt";
    string word;
    cin>>word;
    int lines;
    cin>>lines;
    write(path,word,lines);



    return 0;
}

