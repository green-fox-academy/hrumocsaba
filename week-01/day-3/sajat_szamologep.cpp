#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    string szam1 = "Első szám?";
    string szam2 = "Második szám?";
    string kerdes = "Művelet?";
    string valasz;
    double a;
    double b;
    double c;
    cout << szam1 << endl;
    cin >> a;
    cout << szam2 << endl;
    cin >> b;
    cout << kerdes << endl;
    cin >> valasz;

    if (valasz=="+"){
        c=a+b;
    }
    if (valasz=="-"){
        c=a-b;
    }
    if (valasz=="*"){
        c=a*b;
    }
    if (valasz=="/"){
        c=a/b;
    }

    /*switch (valasz) {
        case "összeadás":
            c = a + b;

            return 0;*/
    cout << "az eredmény: ";
    cout << c << endl;
    return 0;
    }


