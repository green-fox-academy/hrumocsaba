#include "Blogpost.h"
#include <iostream>

void BlogPost::john() {
    cout<<_title[0]<<" titled by "<<_authorname[0]<<" posted at "<<_publicationDate[0]<<endl;
    cout << _text[0]<<endl;
    cout<<endl;
}
void BlogPost::tim() {
    cout<<_title[1]<<" titled by "<<_authorname[1]<<" posted at "<<_publicationDate[1]<<endl;
    cout << _text[1]<<endl;
    cout<<endl;
}
void BlogPost::will() {
    cout<<_title[2]<<" titled by "<<_authorname[2]<<" posted at "<<_publicationDate[2]<<endl;
    cout << _text[2]<<endl;
    cout<<endl;
}