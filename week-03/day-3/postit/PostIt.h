#ifndef OOP_POSTIT_H
#define OOP_POSTIT_H

#include <string>
using namespace std;

class PostIt {
public:
    void post(string backColor, string textColor, string text);

private:
    string _backColor;
    string _textColor;
    string _text;

};


#endif //OOP_POSTIT_H
