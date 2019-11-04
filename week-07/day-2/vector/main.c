#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include <time.h>
int main() {

    srand(time(NULL));
    vector_t vec;
    init(&vec, 1);
    if(vec.error != NO_ERROR){
        return -1;
    }
    for (int i = 0; i <20 ; ++i) {
        push_back(&vec, i);
    }
    pop_back(&vec);
    print(&vec);
    printf("%d = the vector is not empty\n", empty(&vec));
    printf("%d is at 4\n",element_at(&vec,4));
    print(&vec);
    erase_from_till(&vec,0,5);
    print(&vec);
    erase(&vec, 0);
    print(&vec);
    printf("%d th element is 6\n",search_by_value(&vec, 6));
    swap(&vec, 0, 1);
    print(&vec);
    for (int j = 0; j < 5; ++j) {
        push_back(&vec, 10);
    }
    for (int j = 0; j < 5; ++j) {
        push_back(&vec, 3);
    }
    shuffle(&vec);
    print(&vec);
    printf("\n");
    unique(&vec);
    print(&vec);


    destroy(&vec);

}