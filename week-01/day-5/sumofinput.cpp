#include <iostream>
#include <string>
using namespace std;
int sum(int x);

int main(int argc, char* args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter
    int x;
    cin>>x;
    sum(x);

    return 0;
}
int sum(int x){
    int sum=0;
    for (int i = 0; i <=x ; ++i) {
        sum+=i;
    }
    cout<<sum;
}