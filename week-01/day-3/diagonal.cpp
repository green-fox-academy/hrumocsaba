#include <iostream>
using namespace std;
int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was
    int r;
    cout<<"how many rows"<<endl;
    cin>> r;
    for (int i = 1; i <=r; ++i) {
        for (int j = 1; j <=r ; ++j) {
            if(i==1 || i==r){
                cout<<"&";
            }else if(j==1 || j==r){
                cout<<"&";
            } else if(i==j){
                cout<<"&";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}