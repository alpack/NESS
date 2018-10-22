/* Function: Authenticate User */
#include "../include/essentials.h"
#include "../include/authentication.h"

int auth(void){
    system("clear");
    // Login credentials
    char *login = (char *)malloc(MAX_SIZE * sizeof(char *));
    char *password = (char *)malloc(MAX_SIZE * sizeof(char *));
    printf("Login: ");
    scanf("%s", login);
    printf("Senha: ");
    scanf("%s", password);
    // Open file with account credentials w/ read permission
    const char *path = "contas.txt";
    FILE *fp = fopen(path, "r");
    // Search for login & password match, line-by-line
    int line = 0;
    char *lineContent = (char *)malloc(MAX_SIZE * sizeof(char *));
    while (fgets(lineContent, MAX_SIZE, fp) != NULL){
        if (strstr(lineContent, login) && strstr(lineContent, password)){
            free(lineContent); 
            free(login); 
            free(password);
            fclose(fp);
            return 0;
        }
        line++;
    }
    // Free allocated memory
    free(lineContent); 
    free(login); 
    free(password);
    fclose(fp);
    printf("\nOh não! Seus dados cadastrais estão incorretos!\n");
    printf("Lembre-se que seu login e senha são case-sensitive.\n");
    // Give user time to read message.
    for(int timer = 0; timer < 1000000000; timer++){};
    return 1; 
}