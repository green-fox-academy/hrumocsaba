#include <stdio.h>
#include "Chained_List.h"

int main() {
    node_t* node;
    //node = init(node, 5);

    for (int i = 0; i < 5; ++i) {
        push_back(&node,i);
    }

    printnodes(node);
    for (int j = 0; j <= 5; ++j) {

        node = pop_back(node);
    }
    printnodes(node);





    return 0;
}