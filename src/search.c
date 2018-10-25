/*
 * 
 * 
 * 
 */

#include "../include/search.h"
#include "../include/setPath.h"

void search(void){
    /* verify if username is available before asking for password */
    char *talent = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Qual habilidade você está procurando?  ");
    scanf("%s", talent);
    char *path = setPath("characters", "talents", talent);
    FILE *fp = fopen(path, "r+");
    if(!fp){
        printf("\nOh não! Você é um génio e só você tem proeza p/ fazer esta tarefa!\n");
        for(int timer = 0; timer < 1000000000; timer++){};
        free(talent);
        fclose(fp);
        exit(0);
    }

    char lineContent[BUFFER_SIZE];
    while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        if (strstr(lineContent, talent)){
            printf("Opa! Encontramos um match ;)\n");
            printf("%s\n", lineContent);
        }
    }
    free(talent);
    fclose(fp);
}