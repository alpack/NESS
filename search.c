/*
 * Code to search, find and count desired word
 * in a specified file.
 * Code by ALPACK Team 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**** DEFINE GLOBALS ****/
#define BUFFER_SIZE 1024

/**** MAIN FUNCTION ****/
int main(void){
    char path[260];
    printf("Diretorio/nome do arquivo: ");
    scanf("%s", path);
    // Attempt to open file
    FILE *fp = fopen(path, "r");
    if (!fp){ 
        printf("Erro ao abrir arquivo.\n"); 
        exit(0);
    }
    // Initialize variables
    int results = 0, line = 0;
    char *content = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    char *word = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    printf("Palavra para procurar: ");
    scanf("%s", word);
    // Search for string, line-by-line
    while (fgets(content, BUFFER_SIZE, fp) != NULL){
        if (strstr(content, word)){
            printf("Palavra encontrada na linha: %d\n", line);
            printf("%s\n", content);
            results++;
        }
        line++;
    }
    // Inform user no matches were found
    if (!results)
        printf("Arquivo não contém a palavra: %s\n", word);
    // Free memory and close file
    free(content);
    free(word);
    fclose(fp);
    return 0; 
}