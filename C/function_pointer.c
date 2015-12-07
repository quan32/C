//#include <stdio.h>
//#include <string.h>
//
//int compare(const void *, const void *, int (*)(const void *, const void *));
//int numberic_compare(const int *, const int *);
//int string_compare(const char *, const char *);
//
//int main(int argc, const char * argv[]) {
//    
//    char * s1 = "abw";
//    char * s2 = "abc";
//    
//    printf("compare=%d\n", compare(s1, s2, (int (*)(const void *, const void *))string_compare));
//    
//    return 0;
//}
//
//int numberic_compare(const int * x, const int * y) {
//    return (*x < *y) ? -1 : ((*x == *y) ? 0 : 1);
//}
//
//int string_compare(const char * s1, const char * s2) {
//    return strcmp(s1, s2);
//}
//
//int compare(const void * x, const void *y, int (*comp)(const void *, const void *)) {
//    return comp(x,y);
//}