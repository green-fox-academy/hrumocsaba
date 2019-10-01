#include <iostream>
#include "Scanner.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"
#include <vector>
int main() {

    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    // Create a Copier object and invoke copy function on it.
    vector<Printer*> printers;
    Printer3D printer3D(30,20,10), printer3D1(20,30,10), printer3D2(10,20,30);
    printers.push_back(&printer3D);
    printers.push_back(&printer3D1);
    printers.push_back(&printer3D2);
    Printer2D printer2D(10,20), printer2D1(30,10);
    printers.push_back(&printer2D);
    printers.push_back(&printer2D1);
    Copier copier(10,20,30);
    printers.push_back(&copier);
    for (int i = 0; i < printers.size(); ++i) {
        printers[i]->print();
    }
    vector<Scanner*> scanners;
    Scanner scanner(12),scanner1(21);
    scanners.push_back(&scanner);
    scanners.push_back(&scanner1);
    Copier copier1(9,23,21), copier2(14,20,10);
    scanners.push_back(&copier1);
    scanners.push_back(&copier2);
    for (int i = 0; i < scanners.size(); ++i) {
        scanners[i]->scan();
    }
    Copier copier3(21,13,41);
    copier3.copy();




    return 0;
}