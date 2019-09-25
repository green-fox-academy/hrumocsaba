#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>
using namespace std;



class animal {
public:
    int eat();
    int drink();
    int play();
    void what();


private:
    int _hunger = 50;
    int _thirst = 50;
    string _what;

};


#endif //ANIMAL_ANIMAL_H
