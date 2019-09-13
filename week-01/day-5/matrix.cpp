#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output
    int x;
    int y;
    cin>>y;
    int num;

    int array[ y ][ y ];

    for (int i = 0; i <y ; ++i) {
        for (int j = 0; j <y ; ++j) {
            if (i==j){
                array[i][j]=1;
                cout<<array[i][j];
            } else{
                array[i][j]=0;
                cout<<array[i][j];
            }
        }
        cout<<endl;
    }

/*
    int num[5];
    for (int i = 0; i <5 ; ++i) {
        cout<<"number?"<<endl;
        cin>>num[i];
    }
    for (int j = 0; j < 5; ++j) {
        cout<<"your"<<j+1<<"th number is"<<num[j]<<endl;

    }

*/

    return 0;
}
