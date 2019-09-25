#include <iostream>
#include "Animal.h"
using namespace std;

int main() {
    Animal giraffe;

    while(!giraffe._exit){
        giraffe.what();
    }

    return 0;
}