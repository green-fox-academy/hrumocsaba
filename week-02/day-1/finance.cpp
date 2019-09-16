#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



int main(int argc, char* args[])
{
    vector<int>spend{500,1000,1250,175,800,120};
    int sum=0;
    for (int i = 0; i <spend.size() ; ++i) {
        sum+=spend[i];
    }
    cout<<"largest spending was: "<<*max_element(spend.begin(),spend.end())<<endl;
    cout<<"lowest spendig was: "<<*min_element(spend.begin(),spend.end())<<endl;
    double avg = sum/spend.size();
    cout<<avg<<endl;

    return 0;
}