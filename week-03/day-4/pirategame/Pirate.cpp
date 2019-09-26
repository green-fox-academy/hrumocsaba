#include "Pirate.h"
#include "Ship.h"

using namespace std;
int count=1;
Pirate::Pirate() {
    _intoxication=0;
    _awake=1;
    _alive =1;
}

void Pirate::entername() {
    cout<< "Enter pirate name." << endl;
    cin>>_name;
    count++;
}

void Pirate::drinkSomeRum() {
    _intoxication++;
    if(_intoxication<5) {
        cout << _name << " drank sum rum."<< endl;
    }if(_intoxication>=5){
        cout<<_name << " has passed out."<< endl;
        _awake=0;
    }

}
void Pirate::howsItGoingMate() {
    if(_intoxication<5 && _intoxication!=4){
        cout<<"Pour me anudder!"<<endl;
    }if(_intoxication==4){
        cout<<"Arghh, I'ma Pirate. How d'ya d'ink its goin?"<<endl<<_name<< " has fallen asleep."<< endl;
        _awake=0;
    }
}
void Pirate::checkIfAwake() {
    if(_awake==0){
        cout<<_name << " is knocked out. Wake him up?"<<endl;
    }else{
        cout<< _name << " is awake and ready to drink." << endl;
    }
}
void Pirate::brawl() {
    srand(time(NULL));
    int r = rand() % 2;
    string otherpirate;
    cout<<"Who should "<<_name<<" fight?"<< endl;
    cin>>otherpirate;
    cout<<_name<< " has fought with "<< otherpirate <<endl;
    if (r==0){
        cout<<"Sadly they both died in the fight"<< endl;
        _alive=0;
    }
    if (r==1){
        cout<<_name<< " is victorious"<< endl;
    }
    if (r==2){
        cout<<"They knocked each other out"<<endl;
        _awake=0;
        _intoxication=3;
    }
}

void Pirate::script() {
    entername();
    string order;
    do{
        cout<< "What ya wanna do? (drink, talk, check, wake, brawl, die, exit)" <<endl;
        cin>> order;
        if(_alive==1) {
            if (order == "drink") {
                if (_awake == 1) {
                    drinkSomeRum();
                }
                if (_awake == 0) {
                    cout << _name << " is knocked out and cant drink more..." << endl;
                }
            }
            if (order == "talk") {
                if (_awake == 1) {
                    howsItGoingMate();
                }
                if (_awake == 0) {
                    cout << _name << " is knocked out and cant talk..." << endl;
                }
            }
            if (order == "check") {
                checkIfAwake();
            }
            if (order == "wake") {
                if (_intoxication >= 0) {
                    if (_awake == 0) {
                        cout << "Ya kicked " << _name << " and now he is starting to wake up." << endl;
                        _intoxication--;
                    }
                    if (_awake == 1) {
                        cout << _name << " is awake but you still kick him." << endl;
                    }
                }
                if (_intoxication == 0 && _awake == 0) {
                    _awake = 1;
                    cout << _name << " has waken up." << endl;
                }
            }
            if(order=="brawl"){
                if (_awake == 1) {
                    brawl();
                }
                if (_awake == 0) {
                    cout << _name << " is knocked out and cant brawl now..." << endl;
                }
            }
            if(order=="die"){
                cout<<_name<< " died in a fever."<<endl;
                _alive=0;
            }

        }else{
            cout<<_name<< " is dead"<<endl;
        }

    }while ( order != "exit");

}