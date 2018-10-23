/*
 * 
 * 
 * 
 */

#include "../include/search.h"

int search(FILE *fp, char *string){
    /* initialize variables to hold string frequency, location, and line content*/
    int results = 0, line = 0;
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        if (strstr(lineContent, string)){
            // printf("Palavra encontrada na linha: %d\n", line);
            // printf("%s\n", lineContent);
            results++;
        }
        line++;
    }
    /* free allocated memory and close file */
    free(lineContent);
    free(string);
    fclose(fp);
    return results;
}