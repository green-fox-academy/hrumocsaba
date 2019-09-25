#include "PostIt.h"
#include <iostream>
using namespace std;
void PostIt::post(string backColor, string textColor, string text) {
    backColor=_backColor = "black";
    textColor=_textColor = "white";
    text=_text = "Superb";

    cout<<backColor<<" background with "<<textColor<<" text saying: "<<text<<endl;
}