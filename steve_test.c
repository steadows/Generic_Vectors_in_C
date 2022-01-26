
#include <stdio.h>
#include "lite_vector.h"

int main (int argc, char** argv){

    lite_vector * lv2 = lv_new_vec(sizeof(char*));
	printf("Array addres: %p\n", lv2);
    lv_append(lv2, "Hello");

return 0;
}
