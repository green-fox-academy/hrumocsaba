#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(int argc, char* args[])
{
    //Create an empty list which will contain names (strings)
    //Print out the number of elements in the list
    //Add William to the list
    //Print out whether the list is empty or not
    //Add John to the list
    //Add Amanda to the list
    //Print out the number of elements in the list
    //Print out the 3rd element
    //Iterate through the list and print out each name
    //William
    //John
    //Amanda
    //Iterate through the list and print
    //1. William
    //2. John
    //3. Amanda
    //Remove the 2nd element
    //Iterate through the list in a reversed order and print out each name
    //Amanda
    //William
    //Remove all elements
    vector <string> names;
    cout<<names.size()<<endl;
    names.push_back("William");
    if (names.size()>0){
        cout<<"not empty"<<endl;
    }else{
        cout<<"empty"<<endl;
    }
    names.push_back("John");
    names.push_back("Amanda");
    cout<<names.size()<<endl;
    cout<<names[2]<<endl;
    for (int i = 0; i < names.size(); ++i) {
        cout<<names[i]<<endl;;
    }
    for (int i = 0; i<names.size() ; ++i) {
        cout<<i+1<<". "<<names[i]<<endl;
    }
    names.erase(names.begin()+1);

    for (int i = names.size()-1; i >=0 ; --i) {
        cout<<names[i]<<endl;
    }
    names.clear();
    cout<<names.size();


    return 0;
}