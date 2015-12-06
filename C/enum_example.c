#include <stdio.h>
#include <math.h>
#include <string.h>

#define TEXT_SIZE       1000
#define PATTERN_SIZE    10

enum BOOLEAN {
    TRUE    = 1,
    FALSE   = 0
};

void squeeze(char * const, const char * const, char * const);

//int main(int argc, const char * argv[]) {
//    
//    char s1[TEXT_SIZE]      = "nguyen trung quan";
//    char s2[PATTERN_SIZE]   = "abc";
//    char result[TEXT_SIZE];
//    
//    squeeze(s1, s2, result);
//    
//    printf("%s\n", result);
//    
//    return 0;
//}

enum BOOLEAN in_array(char e, const char * const arr) {
    size_t size = strlen(arr);
    int i       = 0;
    
    for (i=0; i<size; ++i) {
        if (arr[i] == e) {
            return TRUE;
        }
    }
    
    return FALSE;
}

void str_to_array(const char * const s, char * const pattern) {
    int  i = 0, j=0;
    size_t size = strlen(s);
    
    for (i=0; i<size; ++i) {
        if (in_array(s[i], pattern) == FALSE) {
            pattern[j++] = s[i];
        }
    }
}

void squeeze(char * const s1, const char * const s2, char * const result) {
    
    char pattern[PATTERN_SIZE];
    size_t size = strlen(s1);
    int    i = 0, j=0;
    
    str_to_array(s2, pattern);
    for (i=0; i<size; i++) {
        if (in_array(s1[i], pattern) == FALSE) {
            result[j++] = s1[i];
        }
    }
    result[j] = '\0';
}


