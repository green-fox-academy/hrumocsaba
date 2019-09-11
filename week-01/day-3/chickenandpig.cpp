#include <iostream>
using namespace std;
int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int cleg;
    int pleg;
    int all;
    cout << "How many chicken leg?" << endl;
    cin >> cleg;
    cout << "How many pig leg?" << endl;
    cin >> pleg;
    cleg=cleg/2;
    pleg=pleg/4;
    all=pleg+cleg;
    cout << all << endl;




    return 0;
}