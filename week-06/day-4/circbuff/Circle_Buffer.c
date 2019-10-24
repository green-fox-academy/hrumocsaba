#include <stdint.h>
#include "Circle_Buffer.h"
void circular_buffer_init(cbuf_handle_t *cbuf, uint8_t* buffer, int size){
    for (int i = 0; i < size; ++i) {
        cbuf->buffer[i] = buffer;
    }
}

void circular_buf_reset(cbuf_handle_t *cbuf){
    for (int i = 0; i < cbuf->size; ++i) {
        cbuf->buffer[i] = -1;
    }
}