#include "lite_vector.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

lite_vector* lv_new_vec(size_t type_size){
    lite_vector* this = malloc(sizeof(lite_vector)); 
    printf("Array address for new vec: %p\n", this);
    this->length = 0;
    this->max_capacity = 0;
    this->type_size = 0;
    this->data = malloc(sizeof(lite_vector)); 
    printf("This is the address of this' data: %p\n", this->data);
    return this;
}

void lv_cleanup(lite_vector* vec){

}

size_t lv_get_length(lite_vector* vec){
    return 0;
}

bool lv_clear(lite_vector* vec){
    return 0;
}

void* lv_get(lite_vector* vec, size_t index){
    return 1;
}

/**
 * lv_resize is essentially private since we marked it static.
 * The job of this function is to attempt to resize the vector.
 * There may be functions you can call to do this for you, or
 * you may write it yourself.  Either way it isn't too hard.
 * With everything though, check to make sure the code worked
 * and return appropriately.  Do NOT destroy the data if the code
 * fails.  If the resize cannot complete, the original vector
 * must remain unaffected.
 */
static bool lv_resize(lite_vector* vec){
    return 0;
}

bool lv_append(lite_vector* vec, void* element){
    vec = element;
    printf("%s\n", &element);
    return 0;
}
