#ifndef file_h
#define file_h

#include <stdio.h>

#define LINE_LENGTH 255
#define TOKEN_NUMBER_IN_LINE 255
#define TOKEN_SIZE 10

enum BOOLEAN{
    true,
    false
};
typedef enum BOOLEAN boolean;

struct FileStruct {
    FILE            *fp;
    unsigned char   type;
    unsigned int    line;
    char            current_line[LINE_LENGTH];
    unsigned long   current_line_length;
    char            tokens[TOKEN_NUMBER_IN_LINE][TOKEN_SIZE];
    char            delim;
    unsigned long   token_num;
    boolean         is_end_file;
};

typedef struct FileStruct File;

File *initFileStruct(char *file_name);
long read_line(File **file);
char *line_content(File *file);
void line_to_array(File **file);
char (*get_tokens(File *file))[];
unsigned long  get_token_num(File *file);
void print_tokens(File *file);
void fsclose(File *file);

#endif