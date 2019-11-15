#include <iostream>
using namespace std;





int main() {
    int N, K, Pont=0, Z = 0;
    cin>>N>>K;
    int racers[N][5];
    int nyertesek[K];
    int arr [6][5] = {
            { 1, 4, 1, 3, 2},
            { 5, 5, 0, 0, 5},
            { 2, 1, 2, 2, 1},
            { 3, 2, 3, 4, 3},
            { 0, 3, 0, 1, 0},
            { 4, 0, 0, 0, 4}
    };

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 5; ++j) {
            racers[i][j] = arr[i][j];
        }
    }


    //pontszámolás
    //for (int k = 0; k < N; ++k) {
    //    for (int i = 0; i < 6; ++i) {
    //        if(racers[k][i] == K){
    //            Pont += 1+ ((K - racers[k][i])*2);
    //        }
    //        if(i==5){
    //            racers[k][i] = Pont;
    //        }
    //    }
    //    Pont = 0;
    //}

    for (int l = 0; l < N; ++l) {
        for (int i = 0; i < 5; ++i) {
            if(racers[l][i] == 1){
                nyertesek[Z] = l;
                Z++;
                l++;
                i=0;
            }
        }
    }

    printf("%d\n", Z);
    for (int k = 0; k < Z; ++k) {
        printf("%d ", nyertesek[k]+1);
    }
    int o;
    printf("%d",o);



    return 0;
}