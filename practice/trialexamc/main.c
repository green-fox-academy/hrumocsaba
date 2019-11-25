#include <stdio.h>

void swap(int *xp, int *yp)
{
    *xp^=*yp;
    *yp^=*xp;
    *xp^=*yp;

}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



void sort(int array[], int n){
    int was_swap = 1;
    int i = 0;
    while (was_swap){
        was_swap = 0;
        i = 0;
        while (i < n-1){
            if(array[i] > array[i+1]){
                swap(&array[i],&array[i+1]);
                was_swap = 1;
            }
            i++;
        }
    }
}


float GetTrickyAvg(int array[], int n){
    float result = 0, smallest_odd, largest_even;


   // for (int i = 0; i < n-1; i++){
   //     for (int j = 0; j < n-i-1; j++) {
   //         if (array[j] > array[j + 1])
   //             swap(&array[j], &array[j + 1]);
   //     }
   // }
    sort(array,n);
    printArray(array,n);

    int z = 0;
    while(array[z]%2 == 0){
        z++;
    }
    smallest_odd = array[z];
    z = n-1;
    while(array[z]%2 == 1){
        z--;
    }
    largest_even = array[z];
    result = (smallest_odd + largest_even)/2;
    return result;
}

int main() {
    printf("Hello, World!\n");
    int array[] = {-6,5,-10,8,-11};
    int n = sizeof(array)/ sizeof(int);
    printf("%.2f",GetTrickyAvg(array,n));

    return 0;
}