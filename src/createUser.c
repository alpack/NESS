/*
 * 
 * 
 * 
 */

#include "../include/createUser.h"
#include "../include/setPath.h"

int createUser(void){
    system("clear");
    char *username = (char *)malloc(MAX_CHAR * sizeof(char *));
    char *description = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    printf("Digite o seu usuario: ");
    scanf("%s", username);
    getchar();                
    printf("Digite uma description: ");
    fgets(description, BUFFER_SIZE, stdin);                         
    
    /* create a card for this user, name with his username */
    char *userPath = setPath("characters", "profiles", username);
    FILE *userCard = fopen(userPath, "a");
    fprintf(userCard, "%s;%s", username, description);

    /* ask user to add talents to profile */
    char choice;
    printf("\nQuer compartilhar alguma habilidade no seu perfil? (s/n)");
    scanf("%c", &choice);
    getchar();

    /* stay in loop while user choice is 's' */
    while(choice == 's'){
        int aptitude;
        char skill[MAX_CHAR];
        printf("\nHabilidade: ");
        scanf("%s", skill);
        getchar();
        printf("\nDe 1 à 5, qual é tua aptitude em %s? ", skill);
        scanf("%d", &aptitude);
        getchar();

        /* Open `fp` file in the database w/ append permission */
        char *skillPath = setPath("characters", "talents", username);
        FILE *fp = fopen(skillPath, "a+");
        fprintf(fp, "%s;%d;%s\n", username, aptitude, skill);
        printf("\nQuer adicionar outra habilidade ao seu perfil? (s/n)");
        scanf("%c", &choice);
        getchar();
    }

    printf("\nParabéns, teu cadastro está completo! Agora só falta por a mão na massa!\n");
    return 0;
}

