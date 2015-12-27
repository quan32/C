#include <stdio.h>
#include "common.h"

int char_to_int(const char c) {
    return c-'0';
}

void print_arr(int arr[], int size) {
    for (int i=0; i<size; ++i) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}