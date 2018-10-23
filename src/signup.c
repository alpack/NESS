/*
 * This source file is composed by, and solely by,
 * the `signup` function. The user will be prompted
 * to inser a valid login and password:
 * the LOGIN must be unique (not previously present 
 * in `contas.txt` file) and the PASSWORD must 
 * be greater than 8 in length. Else, if the provided
 * credetials do not match the speficitations, the 
 * account creation will fail and he`ll be prompted
 * to try again.
 */

#include "../include/signup.h"

int signup(void){
    system("clear");
    /* open file containning user credentials w/ read & append permission */
    const char *path = "../database/auth/usuario.txt";
    FILE *fp = fopen(path, "a+");
    /* allocate memory for user login */
    char *login = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Login: ");
    scanf("%s", login);
    /* allocate memory for content found on each line*/
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        if (strstr(lineContent, login)){ /* compare strings */
            printf("\nOh não! Seu login já foi escolhido! Tente utilizar outro login!\n");
            for(int timer = 0; timer < 1000000000; timer++){};
            /* free allocated memory */
            free(lineContent);
            free(login);
            fclose(fp);
            return 1;
        }
    }
    char *password = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Senha: ");
    scanf("%s", password);
    fprintf(fp, "%s,%s", login, password);
    /* free allocated memory */
    free(lineContent);
    free(login);
    free(password);
    fclose(fp);
    printf("\nParabéns, sua conta foi criada!\n");
    for(int timer = 0; timer < 1000000000; timer++){};
    system("clear");
    return 0;
}