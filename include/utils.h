/*
 * This header file contains several type definitions,
 * global definitions, and libraries which will be used 
 * througout the program.
 */

#ifndef UTILS_H
    #define UTILS_H

    #define BUFFER_SIZE 1024
    #define NAME_SIZE 121
    #define MAX_SIZE 30
    typedef struct card{
        char *nome[NAME_SIZE];
        char *descricao[BUFFER_SIZE];
        int exp;
    } Card;

    int main(void);

    #endif