/*
 * 
 * 
 * 
 */

#include "../include/createUser.h"
#include "../include/search.h"
#include <ctype.h>

/* TO-DO: Integrate with Reiso's code */ 
int createUser(void){
    char *path = "../database/habilidades/", *extension = ".txt";
    /* variables to withold user information */
    char username[MAX_CHAR], description[MAX_CHAR];
    printf("Digite o seu usuario: ");
    scanf("%s", username); // Aqui 
    getchar();                
    printf("Digite uma description: ");
    fgets(description, BUFFER_SIZE, stdin);
    int len = strlen(description); // tirando o \n do final do input
    if (len > 0 && description[len - 1] == '\n')
        description[len - 1] = '\0';                          
    /* create a card for this user, name with his username */
    char userFile[strlen(path) + strlen(username) + strlen(extension) + 1];
    snprintf(userFile, sizeof(userFile), "%s%s%s", path, username, extension);
    FILE *userCard = fopen(userFile, "a");
    fprintf(userCard, "%s;%s", username, description);
    
    /**************************************************************************/
    /***************** OPTION 1: LIMITED SKILLS TO CHOSE FROM *****************/
    /* Open `skills` file in the database w/ read-only permission */
    /*FILE *skills = fopen("../database/habilidades/lista.txt", "r");
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    while (fgets(lineContent, BUFFER_SIZE, skills) != NULL){
        printf("Voce sabe %s? (S/N): ", lineContent);
        char choice;
        if (choice == 's'){
            int aptitude;
            printf("\nDe 1 à 5, qual é tua aptitude em %s?", lineContent);
            scanf("%d", &aptitude);
            char *path2 = "../database/habilidades/", *extension2 = ".txt";
            char file2[strlen(path2) + strlen(lineContent) + strlen(extension2) + 1];
            snprintf(file2, sizeof(file2), "%s%s%s", path2, lineContent, extension2);
            FILE *fp = fopen(file2, "a+");
            fprintf(fp, "%s,%d\n", username, aptitude);
            printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
            scanf("%c", &choice);
        }
        else
            break;
    }
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!\n"); */
    /***************** OPTION 2: USER MAY INPUT ANY SKILL *****************/
    char choice;
    printf("\nQuer compartilhar alguma habilidade no seu perfil? (s/n)");
    scanf("%c", &choice);
    getchar();
    while(choice == 's'){
        int aptitude;
        char skill[MAX_CHAR];
        printf("\nHabilidade: ");
        scanf("%s", skill);
        getchar();
        printf("\nDe 1 à 5, qual é tua aptitude em %s?", skill);
        scanf("%d", &aptitude);
        getchar();
        /* concatenate user skill with .txt extension */
        char *path = "../database/habilidades/", *extension = ".txt";
        char file[strlen(skill) + strlen(extension) + strlen(path) +1];
        snprintf(file, sizeof(file), "%s%s%s", path, skill, extension);
        /* Open `fp` file in the database w/ append permission */
        FILE *fp = fopen(file, "a+");
        fprintf(fp, "%s;%d\n", username, aptitude);
        printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
        scanf("%c", &choice);
        getchar();
        // scanf("%c", &choice);
    }
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!\n");
    return 0;
}

