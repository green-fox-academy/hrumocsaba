#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



int main(int argc, char* args[])
{
    map<string,string> mymap;
    mymap["978-1-60309-452-8"]="A letter to Jo";
    mymap["978-1-60309-459-7"]="Lupus";
    mymap["978-1-60309-444-3"]="Red Panda and Moon Bear";
    mymap["978-1-60309-461-0"]="The Lab";

    for (map<string,string>::iterator it=mymap.begin();it!=mymap.end();it++) {
        cout<<it->second<<" (ISBN: "<<it->first<<")"<<endl;
    }

    mymap.erase("978-1-60309-444-3");

    mymap.erase("The Lab");

    for (map<string,string>::iterator it=mymap.begin();it!=mymap.end();it++) {
        if(it->second=="The Lab"){
            mymap.erase(it);
        }
    }
    for (map<string,string>::iterator it=mymap.begin();it!=mymap.end();it++) {
        cout<<it->second<<" (ISBN: "<<it->first<<")"<<endl;
    }
    mymap["978-1-60309-450-4"]="They Called Us Enemy";
    mymap["978-1-60309-453-5"]="Why Did We Trust Him?";


    map<string,string>::iterator it=mymap.find("478-0-61159-424-8");
    if (it!=mymap.end()){
        cout<<"there is 478-0-61159-424-8 key"<<endl;
    }else{
        cout<<"there is not"<<endl;
    }
    cout<<mymap["978-1-60309-453-5"];






    return 0;
}