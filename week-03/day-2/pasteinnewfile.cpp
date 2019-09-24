#include <iostream>
#include <exception>
#include <fstream>
#include <string>
using namespace std;
// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful
bool coppy(string sourcepath, string destinationpath){
    ifstream source;
    ofstream destination;
    string line;
    source.open(sourcepath);
    destination.open(destinationpath);
    while(getline(source,line)){
        destination<<line<<endl;
    }
    source.close();
    destination.close();

};

int main() {
    string srcpath("C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/myFile.txt");
    string destpath("C:/Users/HP/Greenfox/hrumocsaba/week-03/day-2/mypastedtxt.txt");
    coppy(srcpath,destpath);
    return 0;
}

