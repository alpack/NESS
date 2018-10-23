/*
 * This source file is composed by, and solely by,
 * the function responsible for authenticating user credentials.
 * Upon calling `login()`, it'll receive both `login` and
 * `password` from the user, in order to open a file (contas.txt - which
 * contains all user credentials) and verify that the credentials are correct.
 */

#include "../include/login.h"

int login(void){
    system("clear"); /* clear terminal */
    /* allocate memory for user login and password */ 
    char *login = (char *)malloc(MAX_SIZE * sizeof(char *));
    char *password = (char *)malloc(MAX_SIZE * sizeof(char *));
    printf("Login: ");
    scanf("%s", login);
    printf("Senha: ");
    scanf("%s", password);
    /* open file containning user credentials w/ read-only permission */
    const char *path = "../database/auth/usuario.txt";
    FILE *fp = fopen(path, "r");
    /* create variable to hold current line's content and compare to user input */
    char *lineContent = (char *)malloc(MAX_SIZE * sizeof(char *));
    while (fgets(lineContent, MAX_SIZE, fp) != NULL){
        if (strstr(lineContent, login) && strstr(lineContent, password)){
            free(lineContent); 
            free(login); 
            free(password);
            fclose(fp);
            return 0;
        }
    }
    /* free allocated memory */
    free(lineContent); 
    free(login); 
    free(password);
    fclose(fp);
    /* alert user the program failed to authenticate the credentials provided */
    printf("\nOh não! Seus dados cadastrais estão incorretos!\n");
    printf("Lembre-se que seu login e senha são case-sensitive.\n");
    for(int timer = 0; timer < 1000000000; timer++){}; /* improvised timer */
    return 1; 
}