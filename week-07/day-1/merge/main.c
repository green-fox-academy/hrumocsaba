#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// the resulting array should be 20 elements long
// print the array in descending order
// delete the arrays after you don't use them

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=size-1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int* pointer = malloc(sizeof(int) * 10);
    int* pointer2 = malloc(sizeof(int) * 10);
    int i = 0;
    int n = 0;
    for (i=0 ; i < 10; ++i) {
        if(n%2 == 0){
            pointer[i] = n;
            n++;
        }else{
            n++;
            i--;
        }
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d ", pointer[j]);
    }
    printf("\n");
    n = 0;
    for (i = 0; i < 10; ++i) {
        if(n%2 != 0){
            pointer2[i] = n;
            n++;
        }else{
            n++;
            i--;
        }
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d ", pointer2[j]);
    }
    printf("\n");
    pointer = realloc(pointer, 20 * sizeof(int));
    for (int k = 10; k < 20; ++k) {
        pointer[k] = pointer2[k-10];
    }
    printf("\n");
    for (int j = 0; j < 20; ++j) {
        printf("%d ", pointer[j]);
    }
    printf("\n");
    bubbleSort(pointer, 20);
    printArray(pointer, 20);



    return 0;
}