/*
 * 
 * 
 * 
 */

#include "../include/createUser.h"
#include "../include/search.h"

/* TO-DO: Integrate with Reiso's code */ 
int createUser(void){
    char *path = "../database/habilidades/", *extension = ".txt";
    /* variables to withold user information */
    char username[MAX_CHAR], description[BUFFER_SIZE];
    printf("Digite o seu usuario: ");
    scanf("%s", username);
    printf("Digite uma description: ");
    fflush(stdin);
    fgets(description, BUFFER_SIZE, stdin);
    /* create a card for this user, name with his username */
    char userFile[strlen(path) + strlen(username) + strlen(extension) + 1];
    snprintf(userFile, sizeof(userFile), "%s%s%s", path, username, extension);
    /* open card and write data into it */
    FILE *userCard = fopen(userFile, "w");
    fprintf(userCard, "%s,%s\n", username, description);
    fflush(stdin);
    /**************************************************************************/
    /***************** OPTION 1: LIMITED SKILLS TO CHOSE FROM *****************/
    /* Open `skills` file in the database w/ read-only permission */
    FILE *skills = fopen("../database/habilidades/lista.txt", "r");
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
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!\n");
    /***************** OPTION 2: USER MAY INPUT ANY SKILL *****************/
    char choice;
    printf("\nQuer compartilhar alguma habilidade no seu perfil? (s/n)");
    scanf("%c", &choice);
    while(choice == 'y'){
        int aptitude;
        char skill[MAX_CHAR];
        printf("\nHabilidade: ");
        scanf("%s", skill);
        printf("\nDe 1 à 5, qual é tua aptitude em %s?", skill);
        scanf("%d", &aptitude);
        /* concatenate user skill with .txt extension */
        char *path = "../database/habilidades/", *extension = ".txt";
        char file[strlen(skill) + strlen(extension) + strlen(path) +1];
        /* Open `fp` file in the database w/ append permission */
        snprintf(file, sizeof(file), "%s%s%s", path, skill, extension);
        FILE *fp = fopen(file, "a");
        fprintf(fp, "%s,%d\n", username, aptitude);
        printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
        scanf("%c", &choice);
    }
    /*************************************************************************/
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!\n");
    return 0;
}
