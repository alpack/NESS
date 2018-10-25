/*
 * This source file is composed by, and solely by,
 * the `authMenu` function - which enables the user to either
 * username or create an account (or leave the program).
 * To CREATE an account, users must `enter 1`,
 * and further follow the steps for the `signup` function.
 * To LOGIN into their accounts, users must `enter 2`,
 * and insert their credentials to match the ones 
 * at `contas.txt`. If in either case the prompted
 * functions `return 1`, the program was incapable
 * to authenticate/create user credentials.
 */
#include "../include/authentication.h"
#include "../include/createUser.h" 
#include "../include/setPath.h"
#include "../include/menuViajante.h"

void authMenu(void){
    /* show menu while choice = 0 */
    int choice = 0;
    do{
        system("clear");
        printf("\n MENU INICIAL\n");
        printf("\n  1: Criar Conta\n");
        printf("\n  2: Entrar\n");
        printf("\n  3: Sair\n\n");
        scanf("%d", &choice);
    } while(!choice);

    /* `switch` in function of user's `choice` */
    switch(choice){ 
        case 1:
            /* call signup() until user sucessfully creates an account */
            while(signup() == 1)
                signup();
            createUser();
            /* TO-DO: prompt cadastro() (in `cadastro.c`) to make user's gamified card */
        case 2:
            /* call username() until user inserts valid username and password */
            while(login() == 1)
                login();
            Quest();
            /* TO-DO: create menu function for authenticated users */ 
            break;
        case 3:
            exit(0);
    }
}
/*
 * The `signup()` function requires that the user to
 * insert a valid username and password:
 *  - LOGIN: must be unique (not previously present 
 *      in `contas.txt` file)
 *  - PASSWORD: must be greater than 8 in length. 
 * Else, if the credetials do not match the 
 * speficitations, the function will return 1
 * and prompt the signup menu again.
 */
int signup(void){
    system("clear");
    char *username = (char *)malloc(MAX_CHAR * sizeof(char *));
    char *password = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Login: ");
    scanf("%s", username);

    /* verify if username is available before asking for password */
    char *path = setPath("characters", "profiles", username);
    FILE *check = fopen(path, "r+");
    if(check){
        printf("\nOh não! Seu username já foi escolhido! Tente utilizar outro username!\n");
        for(int timer = 0; timer < 1000000000; timer++){};
        free(username);
        fclose(check);
        return 1;
    }

    /* open a new file if username is available */
    FILE *fp = fopen(path, "a");
    printf("Senha: ");
    scanf("%s", password);
    fprintf(fp, "%s,%s\n", username, password);

    /* free allocated memory */
    printf("\nParabéns, sua conta foi criada!\n");
    for(int timer = 0; timer < 1000000000; timer++){};
    free(username);
    free(password);
    fclose(fp);
    return 0;
}
/*
 * The username() function is responsible for authenticating 
 * user credentials. Upon calling `username()`, it'll receive 
 * both `username` and `password` from the user, in order to 
 * open a file (contas.txt - which contains all user data
 * and verify that the credentials are correct.
 */
int login(void){
    system("clear");
    char *username = (char *)malloc(MAX_CHAR * sizeof(char *));
    char *password = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Login: ");
    scanf("%s", username);
    getchar();
    printf("Senha: ");
    scanf("%s", password);

    /* create variable to hold current line's content and compare to user input */
    char *path = setPath("characters", "profiles", username);
    FILE *fp = fopen(path, "r");

    /* create variable to hold all of the content in a line */
    char *lineContent = (char *)malloc(MAX_CHAR * sizeof(char *));
    while (fgets(lineContent, MAX_CHAR, fp) != NULL){
        if (strstr(lineContent, username) && strstr(lineContent, password)){
        printf("Login realizado com sucesso!\n");
        free(lineContent); 
        free(username); 
        free(password);
        fclose(fp);
        return 0;
        }
    }

    /* alert user the program failed to authenticate the credentials provided */
    printf("\nOh não! Seus dados cadastrais estão incorretos!\n");
    printf("Lembre-se que seu username e senha são case-sensitive.\n");
    for(int timer = 0; timer < 500000000; timer++); /* improvised timer */
    
    /* free allocated memory */
    free(lineContent);
    free(username);
    free(password);
    fclose(fp);
    return 1; 
}