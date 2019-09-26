//
// Created by HP on 2019. 09. 26..
//

#include "Ship.h"
#include <time.h>
#include <fstream>
#include "Pirate.h"
#include <stdlib.h>





Ship::Ship() {

    _captain="Csaba";
    _intoxedcaptain=0;
    srand(time(NULL));
    _intoxedcaptain = rand() % 20;
    int rumnumber = rand() % 100+1;
    int k = rand() % 35;
    int r = rand() % 50;
}
void Ship::nameship() {
    cout<<"Enter ship name."<<endl;
    cin>>_shipname;
}

void Ship::fillShip() {
    srand(time(NULL));
    int r = rand() % 50;
    if(r<30){
        r+=30;
    }
    _crewnumber=r;
    string pirate="Pirate";
    for (int i = 0; i < r; ++i) {
        _crew.push_back(pirate);
    }
    cout<<"There are "<< _crewnumber << " pirates on "<<_shipname<<endl;
}

void Ship::battle() {
    _intoxedcaptain = rand() % 20;
    cout << "You prepare for battle but the captain drank "<< _intoxedcaptain<< " bottles of rum."<< endl;
    int othership=rand()%60+1;
    int loss=rand()%6+1;
    cout<<"The other ship has " << othership<<endl;

    if(othership > _crewnumber-_intoxedcaptain){
        cout<<"The "<<_shipname<<" lost the batte and "<< loss <<" crewmember died."<<endl;
        _crewnumber-=loss;
        cout<<_shipname<<" has "<< _crewnumber<< " pirate left."<<endl;
    }
    if(othership == _crewnumber-_intoxedcaptain){
        cout<<"The "<<_shipname<<" and the other ship got to a tie and they both got destroyed."<< endl;
        _destroyed=1;
    }
    if(othership < _crewnumber-_intoxedcaptain){
        cout<<"The "<<_shipname<<" won the battle and you got "<<othership*2<< " rum"<< endl;
    }

}

void Ship::script() {

    string order;
    nameship();
    fillShip();
    do{
        if(_destroyed==0) {

            cout << "what to do?(battle, check)" << endl;
            cin >> order;
            if (order == "battle") {
                battle();
            }
        }else{
            cout<<_shipname<<" was destroyed."<<endl;
        }
    }while (order != "exit");

}
