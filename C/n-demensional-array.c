//#include <stdio.h>
//#include <string.h>
//
//#define LINE_NUMBER         100
//#define WORD_IN_LINE_NUMBER 100
//#define WORD_LENGTH         10
//
//void get_input(char (*text)[WORD_IN_LINE_NUMBER][WORD_IN_LINE_NUMBER]);
//void split_line_to_array(char * line, char (*word_arr)[WORD_IN_LINE_NUMBER]);
//void print_line(char (*word_arr)[WORD_IN_LINE_NUMBER]);
//void print(char (*text)[WORD_IN_LINE_NUMBER][WORD_IN_LINE_NUMBER]);
//
//int main(int argc, const char * argv[]) {
//    
//    char text[LINE_NUMBER][WORD_IN_LINE_NUMBER][WORD_IN_LINE_NUMBER];
//    
//    get_input(text);
//    print(text);
//    
//    return 0;
//}
//
//void get_input(char (*text)[WORD_IN_LINE_NUMBER][WORD_IN_LINE_NUMBER]) {
//    
//    int  i=0, result=0;
//    char tmp[WORD_IN_LINE_NUMBER*WORD_IN_LINE_NUMBER];
//    
//    printf("Enter text:\n");
//    while (i < LINE_NUMBER) {
//        result = scanf("%[^\n]%*c", tmp);
//        if (result == 0) {
//            break;
//        }
//        split_line_to_array(tmp, text[i]);
//        ++i;
//    }
//}
//
//void split_line_to_array(char * line, char (*word_arr)[WORD_IN_LINE_NUMBER]) {
//    
//    int     i= 0, j=0, k=0, l=0, m=0, flag=0;
//    int     size = (int)strlen(line);
//    char    tmp[WORD_LENGTH];
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
//                l = 0;
//                for (k=i+1; k<=j; ++k) {
//                    tmp[l++] = line[k];
//                }
//                tmp[l] = '\0';
//                
//                strcpy(word_arr[m++], tmp);
//                flag = 1;
//            }
//        }
//        
//        --i;
//    }
//    
//    if (line[0] != ' ') {
//        l = 0;
//        for (k=i+1; k<=j; ++k) {
//            tmp[l++] = line[k];
//        }
//        tmp[l] = '\0';
//        strcpy(word_arr[m++], tmp);
//    }
//}
//
//void print(char (*text)[WORD_IN_LINE_NUMBER][WORD_IN_LINE_NUMBER]) {
//    int i=0;
//    
//    while (strcmp(text[i][0], "") != 0) {
//        print_line(text[i]);
//        ++i;
//    }
//}
//
//void print_line(char (*word_arr)[WORD_IN_LINE_NUMBER]) {
//    int i = 0;
//    
//    while (word_arr[i][0] != '\0') {
//        printf("%s ", word_arr[i]);
//        ++i;
//    }
//    
//    printf("\n");
//}