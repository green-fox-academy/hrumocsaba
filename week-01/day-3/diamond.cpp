#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    //n=n/2;
    //ha paratlan ez fut
    if (n % 2 != 0) {
        n=n+1;
        for (int o = 1; o <=n/2 ; ++o) {
            for (int p = 1; p <=n-1 ; ++p) {
                if (p>=(n/2)-(o-2)&& p<=(n/2)+(o-2)){
                    cout<<"*";
                } else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        for (int h = 0; h <=n-2 ; ++h) {
            cout<<"*";
        }
        cout<<endl;
        for (int k = (n / 2); k >= 1; --k) {
            for (int x = 1; x <= n - 1; ++x) {
                if (x >= (n / 2) - (k - 2) && x <= (n / 2) + (k - 2)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } else /*ha paros ak ez fut*/ {
        for (int i = 1; i <= n / 2; ++i) {
            for (int j = 1; j <= (n) - 1; ++j) {
                if (j >= (n / 2) - (i - 1) && j <= (n / 2) + (i - 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int k = (n / 2); k >= 1; --k) {
            for (int x = 1; x <= n - 1; ++x) {
                if (x >= (n / 2) - (k - 1) && x <= (n / 2) + (k - 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}