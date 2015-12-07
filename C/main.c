#include <stdio.h>
#include <string.h>

#define LINE_NUMBER 100
#define LINE_LENGTH 1000

int get_input(char (*text)[LINE_LENGTH]);
void print(char (*text)[LINE_LENGTH], size_t);

int main(int argc, const char * argv[]) {
    
    char text[LINE_NUMBER][LINE_LENGTH];
    
    const size_t size = get_input(text);
    print(text,size);
    
    return 0;
}

int get_input(char (*text)[LINE_LENGTH]) {
    
    int  i=0;
    char tmp[LINE_LENGTH];
    
    printf("Enter text:\n");
    while (i < LINE_NUMBER) {
        scanf("%[^\n]", tmp);
        
        printf("size=%d\n", (int)strlen(tmp));
        printf("size=%d\n", tmp[0]);
        printf("size=%d\n", tmp[1]);
        if (strlen(tmp) == 0) {
            break;
        }
        
        strcpy(text[i++], tmp);
    }
    
    printf("i=%d\n", i);
    return i;
}

void print(char (*text)[LINE_LENGTH], size_t size) {
    int i=0;
    
    for (i=0; i<size; i++) {
        printf("%s\n", text[i]);
    }
    printf("\n");
}










