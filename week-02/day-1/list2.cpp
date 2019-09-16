#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



int main(int argc, char* args[])
{
    vector <string> lista;
    lista.emplace_back("Apple");
    lista.emplace_back("Avocado");
    lista.emplace_back("Blueberries");
    lista.emplace_back("Durian");
    lista.emplace_back("Lychee");
    vector <string> listb=lista;

    if (find(listb.begin(),listb.end(),"Durian")!=listb.end()){
        cout<<"List B contains Durian"<<endl;
    }else{
        cout<<"List B doe not contains Durian"<<endl;
    }

    listb.erase(find(listb.begin(),listb.end(),"Durian"));

    lista.insert(lista.begin()+4,"Kiwifruit");

    cout<<"list a is "<<lista.size()<<", list b is "<<listb.size()<<endl;

    vector<string>::iterator it=find(lista.begin(),lista.end(),"Avocado");
    int index=distance(lista.begin(),it);
    cout<<"Avocado index is: "<<index<<endl;

    vector<string>::iterator it2=find(listb.begin(),listb.end(),"Durian");
    int index2=distance(listb.begin(),it);
    cout<<"Durian in list B is: "<<index2<<endl;

    listb.insert(listb.end(),{"Passionfruit","Pomelo"});

    cout<<lista[2]<<endl;

    cout<<endl;

    for (int i = 0; i < lista.size() ; ++i) {
        cout<<lista[i]<<endl;
    }
    cout<<endl;
    for (int i = 0; i < listb.size() ; ++i) {
        cout<<listb[i]<<endl;
    }


    return 0;
}