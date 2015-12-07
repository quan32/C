//#include <stdio.h>
//#include <string.h>
//
//#define LINE_NUMBER 100
//#define LINE_LENGTH 1000
//
//int get_input(char (*text)[LINE_LENGTH]);
//void line_reverse(char * line);
//void reverse(char (*text)[LINE_LENGTH], size_t size);
//void print(char (*text)[LINE_LENGTH], size_t);
//
//int main(int argc, const char * argv[]) {
//    
//    char text[LINE_NUMBER][LINE_LENGTH];
//    const size_t size = get_input(text);
//    reverse(text, size);
//    print(text,size);
//    
//    return 0;
//}
//
//int get_input(char (*text)[LINE_LENGTH]) {
//    
//    int  i=0, result=0;
//    char tmp[LINE_LENGTH];
//    
//    printf("Enter text:\n");
//    while (i < LINE_NUMBER) {
//        result = scanf("%[^\n]%*c", tmp);
//        if (result == 0) {
//            break;
//        }
//        strcpy(text[i++], tmp);
//    }
//    
//    return i;
//}
//
//void reverse(char (*text)[LINE_LENGTH], size_t size) {
//    int i=0;
//    
//    for (i=0; i<size; ++i) {
//        line_reverse(text[i]);
//    }
//}
//
//void line_reverse(char * line) {
//    
//    int     i= 0, j=0, k=0, l=0, flag=0;
//    int     size = (int)strlen(line);
//    char    tmp[LINE_LENGTH];
//    
//    i = j = size-1;
//    while (i >= 0) {
//        if (line[i] != ' ') {
//            if (flag == 1) {
//                flag = 0;
//                j    = i;
//            }
//        } else {
//            if (flag == 0) {
//                for (k=i+1; k<=j; ++k) {
//                    tmp[l++] = line[k];
//                }
//                flag = 1;
//            }
//            
//            tmp[l++] = ' ';
//        }
//        
//        --i;
//    }
//    
//    if (line[0] != ' ') {
//        for (k=i+1; k<=j; ++k) {
//            tmp[l++] = line[k];
//        }
//    }
//    
//    tmp[l] = '\0';
//    
//    strcpy(line, tmp);
//}
//
//void print(char (*text)[LINE_LENGTH], size_t size) {
//    int i=0;
//    
//    for (i=0; i<size; ++i) {
//        printf("%s\n", text[i]);
//    }
//    printf("\n");
//}