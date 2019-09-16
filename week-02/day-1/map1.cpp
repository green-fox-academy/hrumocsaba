#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;



int main(int argc, char* args[])
{
    map<int,char> mymap;
    vector<int>v;
    cout<<mymap.size()<<endl;
    mymap[97]='a';
    mymap[98]='b';
    mymap[99]='c';
    mymap[65]='A';
    mymap[66]='B';
    mymap[67]='C';
    for (map<int,char>::iterator it=mymap.begin();it!=mymap.end();it++) {
        v.push_back(it->first);
        cout<<it->first<<endl;
    }
    for (map<int,char>::iterator it=mymap.begin();it!=mymap.end();it++) {
        v.push_back(it->first);
        cout<<it->second<<endl;
    }
    mymap['D']=68;
    cout<<mymap.size()<<endl;
    cout<<mymap[99]<<endl;
    mymap.erase(mymap[97]);
    for (map<int,char>::iterator it=mymap.begin();it!=mymap.end();it++) {
        v.push_back(it->first);
        cout << it->first << endl;
    }
    for (map<int,char>::iterator it=mymap.begin();it!=mymap.end();it++) {
        v.push_back(it->first);
        cout<<it->second<<endl;
    }
    if(mymap[100]){
        cout<<"there is a key with 100"<<endl;
    }else{
        cout<<"there is no key with 100"<<endl;
    }
    mymap.clear();



    return 0;
}