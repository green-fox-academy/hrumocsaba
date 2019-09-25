#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>
using namespace std;



class Animal {
public:
    Animal();
    void eat();
    void drink();
    void play();
    void what();
    bool _exit;

private:
    int _hunger;
    int _thirst;
    string _what;

};


#endif //ANIMAL_ANIMAL_H
