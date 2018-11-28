/*
 * 
 * 
 * 
 */

#include "../include/search.h"
#include "../include/setPath.h"

void search(void){
    /* Try to open file w/ desired skill's name */
    char *talent = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Qual habilidade você está procurando?  ");
    scanf("%s", talent);
    char *path = setPath("characters", "talents", talent);
    FILE *fp = fopen(path, "r");
    if(!fp){
        printf("\nOh não! Você é um génio e só você tem proeza p/ fazer esta tarefa!\n");
        for(int timer = 0; timer < 1000000000; timer++){};
        free(path);
        free(talent);
        fclose(fp);
        exit(0);
    }

    /* File with skill name exists, therefore, a match was found */
    printf("Opa! Encontramos um match ;)\n");
    char lineContent[BUFFER_SIZE];
    while (fgets(lineContent, sizeof(lineContent), fp) != NULL){
        printf("%s", lineContent);
        for(int timer = 0; timer < 1000000; timer++){};
    }

    /* free allocated memory for variables */
    free(talent);
    free(path);
    fclose(fp);
}