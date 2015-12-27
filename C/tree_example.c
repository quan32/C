//#include <stdio.h>
//#include "tree.h"
//
//void print_arr(int arr[], int size);
//
//int main(int argc, const char *argv[]) {
//    Node *T = initTree();
//    int data[] = {9, 4, 7, 2, 5, 3, 5, 4, 5};
//    int arr[3];
//    int num= 3, pos= 0, result;
//    
//    unsigned long size   = sizeof(data)/sizeof(int);
//    
//    for (int i=0; i<size; ++i) {
//        T = addNode(T, data[i]);
//    }
//    
//    traverse(T);
//    printf("\n");
//    
//    getArray(T, arr, &num, &pos);
//    result = pos;
//    
//    print_arr(arr, result);
//    
//    return 0;
//}
//
//void print_arr(int arr[], int size) {
//    for (int i=0; i<size; ++i) {
//        printf("%d ", arr[i]);
//    }
//    
//    printf("\n");
//}