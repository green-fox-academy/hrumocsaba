#include <iostream>
using namespace std;
int main() {
    double sum;
    double avg;
    double num;
    double a=0;
    char more='n';
    cout<< "Enter a letter when finished!"<<endl;
    do{
        cout<<"Number?"<<endl;
        cin>>num;
        if(!cin){
            avg=sum/a;
            cout<<"your average of numbers is:";
            cout<<avg<<endl;
            cout<<"the sum of your numbers:";
            cout<<sum<<endl;
            cout<<"numbers u gave:";
            cout<<a<<endl;
            break;
        }
        sum+=num;
        a++;


    }while (more=='n');


    return 0;
}