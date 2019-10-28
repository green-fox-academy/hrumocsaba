#include <stdio.h>
#include <stdlib.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int percentile(float * matrix, float n, int size){
    int ret = (n/100) * (float)size;
    return matrix[ret];

}


int main()
{
    int size;
    printf("enter the matrix size\n");
    scanf("%d", &size);
    float * matrix = malloc(size * sizeof(float));
    printf("enter numbers!\n");
    for (int i = 0; i < size; ++i) {
        scanf("%f", &matrix[i]);
    }

    printf("\n%d",percentile(matrix,80, size));
    free(matrix);

    return 0;
}