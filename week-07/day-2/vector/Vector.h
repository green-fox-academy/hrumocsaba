#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

typedef enum error{
    NO_ERROR = 0,
    FAILED_TO_INIT,
    FAILED_TO_PUSH_BACK,
    FAILED_TO_POP_BACK,
    FAILED_TO_ERASE,
    FAILED_TO_GET_INDEXED_ELEMENT
}error_t;

typedef struct vector{
    int size;
    int capacity;
    int* data;
    error_t error;

}vector_t;

void init(vector_t* vec, int size);
void push_back(vector_t* vec, int new_data);
int element_at(vector_t* vec, int at);
void pop_back(vector_t* vec);
void destroy(vector_t* vec);
void clear(vector_t* vec);
int empty(vector_t* vec);
void print(vector_t* vec);
void erase(vector_t* vec, int at);
void erase_from_till(vector_t*vec, int from, int till);
int search_by_value(vector_t* vec, int value);
void shuffle(vector_t* vec);
void swap(vector_t* vec, int index1, int index2);
void unique(vector_t *vec);
void bubble_sort_asc(vector_t *vec);


#endif //VECTOR_VECTOR_H
