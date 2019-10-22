#include <iostream>

using namespace std;
const int maxN=100;
int main()
{
    int n, X[maxN], p[maxN],h=0;

    cin>>n;
    for(int i=0; i<n;i++){
        cin>>X[i];
    }
    for(int i=1; i<n;i++){
        if(X[i]>100&&X[i-1]<=100){
            p[h]=i;
            h++;
        }
    }
    cout<<h<<" ";
    for(int i=0; i<h;i++){
        cout<<p[i]+1<<" ";
    }
    return 0;
}
