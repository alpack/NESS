/*
 * 
 * 
 * 
 */

#include "../include/createUser.h"
#include "../include/search.h"

/* TO-DO: Integrate with Reiso's code */ 
int createUser(void){
    FILE *card = fopen("database/habilidades/card.txt", "a+");
    /* variables to withold user information */
    char name[NAME_SIZE], description[BUFFER_SIZE];
    printf("Digite o seu nome: ");
    fflush(stdin);
    fgets(name, NAME_SIZE, stdin);
    /* get lenght of name without `\n` and skip line*/
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';
    printf("Digite uma description: ");
    fflush(stdin);
    fgets(description, BUFFER_SIZE, stdin);
    len = strlen(description);
    if (len > 0 && description[len - 1] == '\n')
        description[len - 1] = '\0';
    /* print user data into .txt file */
    fprintf(card, "%s;%s\n", name, description);
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
            fprintf(fp, "%s,%d\n", name, aptitude);
            printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
            scanf("%c", &choice);
        }
        else
            break;
    }
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!");
    /***************** OPTION 2: USER MAY INPUT ANY SKILL *****************/
    char choice;
    printf("\nQuer compartilhar alguma habilidade no seu perfil? (s/n)");
    scanf("%c", &choice);
    while(choice == 'y'){
        int aptitude;
        char skill[MAX_SIZE];
        printf("\nHabilidade: ");
        scanf("%s", skill);
        printf("\nDe 1 à 5, qual é tua aptitude em %s?", skill);
        scanf("%d", &aptitude);
        /* concatenate user skill with .txt extension */
        char *path = "../database/habilidades/", *extension = ".txt";
        char file[strlen(skill) + strlen(extension) + strlen(path) +1];
        snprintf(file, sizeof(file), "%s%s%s", path, skill, extension);
        FILE *fp = fopen(file, "a+");
        fprintf(fp, "%s,%d\n", name, aptitude);
        printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
        scanf("%c", &choice);
    }
    /*************************************************************************/
    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!");
    return 0;
}

/* Open `skills` file in the database w/ read-only permission */