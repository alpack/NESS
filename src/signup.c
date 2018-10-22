/* Function: Create User */
#include "../include/essentials.h"
#include "../include/signup.h"

int signup(void){
    system("clear");
    // Open file with account credentials w/ read & append permission
    const char *path = "contas.txt";
    FILE *fp = fopen(path, "a+");
    // Receive user login
    char *login = (char *)malloc(MAX_SIZE * sizeof(char *));
    printf("Login: ");
    scanf("%s", login);
    // Check if username already exists
    int line = 0;
    char *lineContent = (char *)malloc(MAX_SIZE * sizeof(char *));
    while (fgets(lineContent, MAX_SIZE, fp) != NULL){
        if (strstr(lineContent, login)){
            printf("\nOh não! Seu login já foi escolhido! Tente utilizar outro login!\n");
            for(int timer = 0; timer < 1000000000; timer++){};
            free(lineContent);
            free(login);
            fclose(fp);
            return 1;
        }
        line++;
    }
    char *password = (char *)malloc(MAX_SIZE * sizeof(char *));
    printf("Senha: ");
    scanf("%s", password);
    fprintf(fp, "%s,%s\n", login, password);
    // Free allocated memory
    free(lineContent);
    free(login);
    free(password);
    fclose(fp);
    printf("\nParabéns, sua conta foi criada!\n");
    for(int timer = 0; timer < 1000000000; timer++){};
    return 0;
}