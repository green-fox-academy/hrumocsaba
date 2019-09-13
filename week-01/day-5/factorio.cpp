#include <iostream>
#include <string>
using namespace std;

void factorio(int x,int& y){
    y=1;
    for (int i = 1; i <= x; ++i) {
        y=y*i;
    }

}
int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.
    int x;
    int y;
    cin>>x;
    factorio(x,y);
    cout<<y;



    return 0;
}
