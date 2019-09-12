#include <iostream>
using namespace std;
int main() {
    int o;
    int s;
    for (s = 1; s<=8 ; ++s) {
        for (o = 1; o<=8 ; ++o) {
            if(s%2!=0 && o%2!=0){
                cout<<"&";
            } else if (s%2==0 && o%2==0){
                cout<<"&";
            } else {
                cout<<" ";

            }


        }
        cout<<endl;

    }




    return 0;
}