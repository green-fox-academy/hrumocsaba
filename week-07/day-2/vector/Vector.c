//
// Created by HP on 2019. 10. 29..
//
#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(vector_t* vec, int size){
    vec->error = NO_ERROR;
    if(size <=0 ) {
        vec->error = FAILED_TO_INIT;
        return;
    }
    vec->data = (int*)calloc(size, sizeof(int));
    vec->capacity = size;
    vec->size = 0;
}

void push_back(vector_t* vec, int new_data){
    if(vec->size >= vec->capacity){
        vec->capacity*=2;
        vec->data = (int*)realloc(vec->data, vec->capacity * sizeof(int));
    }

    vec->data[vec->size] = new_data;
    vec->size++;
}

int element_at(vector_t* vec, int at){
    vec->error = NO_ERROR;
    if(at < 0 || at > vec->size-1) {
        vec->error = FAILED_TO_GET_INDEXED_ELEMENT;
        return -1;
    }

    return vec->data[at];
}

void pop_back(vector_t* vec){
    vec->error = NO_ERROR;
    if(vec->size <= 0) {
        vec->error = FAILED_TO_POP_BACK;
        return;
    }
    vec->size--;
}

void destroy(vector_t* vec){
    vec->size = 0;
    vec->capacity = 0;
    free(vec);
}

void clear(vector_t *vec) {
    if(vec->size <= 0)return;
    vec->data = (int*)calloc(1, sizeof(int));
    vec->capacity = vec->size = 0;

}

int empty(vector_t *vec) {
    if(vec->size == 0)return 1;
    return 0;
}

void print(vector_t *vec) {
    if(empty(vec)) return;
    printf("{|");
    for (int i = 0; i < vec->size; ++i) {
        printf("%d|", vec->data[i]);
    }
    printf("}\n");
}

void erase(vector_t *vec, int at) {
    if(vec->size-1 < at || at < 0)return;
    int j = 0;
    int numb = vec->data[at];
    for (int i = 0; i < vec->size; ++i) {
        if(numb == vec->data[i]){
            i++;
            vec->data[j] = vec->data[i];
        }else{
            vec->data[j] = vec->data[i];
        }
        j++;
    }
    vec->size--;
}

void erase_from_till(vector_t *vec, int from, int till) {
    if(from >= till || from < 0 || till > vec->size)return;
    for (int i = 0; i <= vec->size - (till-from) ; ++i) {
        vec->data[i+from] = vec->data[till+i];
    }
    vec->size=vec->size - (till-from);
}

int search_by_value(vector_t *vec, int value) {
    for (int i = 0; i < vec->size; ++i) {
        if(vec->data[i] == value){
            return i;
        }
    }
    return -1;
}

void shuffle(vector_t *vec) {
    int random;
    int random2;
    for (int i = 0; i < 100; ++i) {
        random = rand() % vec->size;
        random2 = rand() % vec->size;
        swap(vec, random, random2);
    }
}

void swap(vector_t *vec, int index1, int index2) {
    if(index1 > vec->size || index2 > vec->size)return;
    int temp = vec->data[index1];
    vec->data[index1] = vec->data[index2];
    vec->data[index2] = temp;
}

void unique(vector_t *vec){
    int asd = vec->size;

    for (int k = 0; k < asd; ++k) {
      int temp = vec->data[k];

      for (int j = k+1; j < asd;) {
          //printf("%d ", vec->data[j]);
          if(vec->data[j] == temp){
              erase_from_till(vec,j,j+1);
              asd--;

          }else j++;
      }
      //printf("\n");
  }

}

void bubble_sort_asc(vector_t *vec) {
    int i, j;
    for (i = 0; i < vec->size-1; i++)
        // Last i elements are already in place
        for (j = 0; j < vec->size-i-1; j++)
            if (vec->data[j] > vec->data[j+1])
                swap(vec, j, j+1);

}
