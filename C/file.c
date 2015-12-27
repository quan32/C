#include "file.h"
#include <errno.h>
#include <stdlib.h>
#include <string.h>


File *initFileStruct(char *file_name) {
    File *file = (File*) malloc(sizeof(struct FileStruct));
    if (file == NULL) {
        perror("Error:");
        exit(-1);
    }
    
    if (strcmp(file_name, "stdin") != 0) {
        file->fp    = fopen(file_name, "r");
        file->type  = 1;
        if (file->fp == NULL) {
            perror("Error:");
            exit(-1);
        }
    } else {
        file->fp    = stdin;
        file->type  = 0;
    }
    
    file->line = 0;
    strcpy(file->current_line, "");
    file->current_line_length = 0;
    file->is_end_file = false;
    file->delim       = ' ';
    file->token_num   = 0;
    
    return file;
}

long read_line(File **file) {
    if ((*file)->is_end_file == true) {
        return -1;
    }
    
    char *line= NULL;
    
    line = fgets((*file)->current_line, LINE_LENGTH, (*file)->fp);
    if (line != NULL) {
        (*file)->line++;
        (*file)->current_line_length = strlen((*file)->current_line);
        line_to_array(file);
        
        return (*file)->current_line_length;
    }
    
    (*file)->is_end_file = true;
    
    return -1;
}

char *line_content(File *file) {
    return file->current_line;
}

void print_tokens(File *file) {
    
    for (int i=0; i<file->token_num; ++i) {
        printf("%s\n", file->tokens[i]);
    }
}

char (*get_tokens(File *file))[] {
    return file->tokens;
}

unsigned long  get_token_num(File *file) {
    return file->token_num;
}

unsigned long get_tokens_num(File *file) {
    return file->token_num;
}

void line_to_array(File **file) {
    unsigned long i=0,j=0,k=0;
    
    while ((*file)->current_line[i] != '\n') {
        while ((*file)->current_line[i] == (*file)->delim) {
            ++i;
        }
        
        k = 0;
        while (((*file)->current_line[i] != (*file)->delim) && ((*file)->current_line[i] != '\n')) {
            (*file)->tokens[j][k++] = (*file)->current_line[i++];
        }
        ++j;
    }
    
    (*file)->token_num = j;
}

void fsclose(File *file) {
    if (file->type == 1) {
        fclose(file->fp);
    }
}
