#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* args[]) {

    // - Create a two dimensional array
    //   which can contain the different shades of specified colors
    // - In `colors[0]` store the shades of green:
    //   `"lime", "forest green", "olive", "pale green", "spring green"`
    // - In `colors[1]` store the shades of red:
    //   `"orange red", "red", "tomato"`
    // - In `colors[2]` store the shades of pink:
    //   `"orchid", "violet", "pink", "hot pink"`
    string color;
    string y;
    cin>>color;

    string colors [3][4]={
            { "lime, forest green, olive, pale green, spring green"},
            {"orange red", "red", "tomato"},
            {"orchid", "violet", "pink", "hot pink"},
    };
    if(color=="green"){
        cout<<colors[0][0];
    } else if (color=="red"){
        for (int i = 0; i < 2; ++i) {
            cout<<colors[1][i]<< ", ";
        }
    }else if(color=="pink"){
        for (int i = 0; i < 3; ++i) {
            cout<<colors[2][i]<<", ";
        }
    }

    return 0;
}