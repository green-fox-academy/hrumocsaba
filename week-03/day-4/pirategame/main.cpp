#include <iostream>
#include "Pirate.h"
#include "Ship.h"

using namespace std;


int main() {
    Ship ship1;
    Pirate pirate1;
    string order;
    do{
        cout<<"pirate or ship?"<<endl;
        cin >> order;
        if(order=="ship"){
            ship1.script();

        }
        if(order=="pirate")
        {
            pirate1.script();

        }

    }while (order!="exit");

    return 0;
}