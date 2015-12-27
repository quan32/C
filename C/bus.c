#include <stdio.h>
#include <string.h>
#include "common.h"
#include "file.h"
#include "tree.h"

int main(int argc, const char *argv[]) {
    
    unsigned int n=0, m=0, sum=0, tmp=0, tmp1=0, tmp2=0;
    Node *T = initTree();
    
    File *file = initFileStruct("file/file_001.txt");
    
    while (read_line(&file) != -1) {
        if (file->line == 1) {
            n = file->tokens[0][0];
            m = file->tokens[1][0];
            continue;
        }
        
        for (int i=2; i<file->token_num; ++i) {
            tmp = char_to_int(file->tokens[i][0]) - sum;
            tmp = (tmp > 0) ? tmp : 0;
            
            T = addNode(T, tmp);
        }
        sum+= char_to_int(file->tokens[0][0]);
    }
    
    tmp1 = char_to_int(m);
    tmp2 = 0;
    getSum(T, &sum, &tmp1, &tmp2);
    printf("total=%d\n", sum);
    
    return 0;
}