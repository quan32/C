#include <stdio.h>
#include <math.h>
#include <string.h>

#define HESO 16

int htoi(char const * const);
char hexal_to_dec(char const * const);

//int main(int argc, const char * argv[]) {
//    
//    char s[20] = "0x3e8";
//    printf("%d\n", htoi(s));
//    
//    return 0;
//}

int htoi(char const * const s) {
    
    int value = 0;
    int he_so = 1;
    size_t i     = 0;
    size_t size  = 0;
    
    size = strlen(s);
    for (i=size-1; i>1; --i) {
        value += he_so * hexal_to_dec(&s[i]);
        he_so *= HESO;
    }
    
    return value;
}

char hexal_to_dec(char const * const c) {
    
    char value = 0;
    
    switch (*c) {
        case '0':
            value = 0;
            break;
            
        case '1':
            value = 1;
            break;
            
        case '2':
            value = 2;
            break;
            
        case '3':
            value = 3;
            break;
            
        case '4':
            value = 4;
            break;
            
        case '5':
            value = 5;
            break;
            
        case '6':
            value = 6;
            break;
            
        case '7':
            value = 7;
            break;
            
        case '8':
            value = 8;
            break;
            
        case '9':
            value = 9;
            break;
            
        case 'a':
        case 'A':
            value = 10;
            break;
            
        case 'b':
        case 'B':
            value = 11;
            break;
            
        case 'c':
        case 'C':
            value = 12;
            break;
            
        case 'd':
        case 'D':
            value = 13;
            break;
            
        case 'e':
        case 'E':
            value = 14;
            break;
            
        case 'f':
        case 'F':
            value = 15;
            break;
            
    }
    
    return value;
}