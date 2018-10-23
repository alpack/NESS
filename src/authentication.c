/*
 * This source file is composed by, and solely by,
 * the `authMenu` function - which enables the user to either
 * login or create an account (or leave the program).
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

void authMenu(void){
    int choice = 0; /* holds user choice */
    do{             /* show menu while choice = 0 */
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
            break;
        case 2:
            /* call login() until user inserts valid login and password */
            while(login() == 1)
                login();
            /* TO-DO: create menu function for authenticated users */ 
            break;
        case 3:
            exit(0);
    }
}
/*
 * The `signup()` function requires that the user to
 * insert a valid login and password:
 *  - LOGIN: must be unique (not previously present 
 *      in `contas.txt` file)
 *  - PASSWORD: must be greater than 8 in length. 
 * Else, if the credetials do not match the 
 * speficitations, the function will return 1
 * and prompt the signup menu again.
 */
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
    fprintf(fp, "%s,%s\n", login, password);
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
/*
 * The login() function is responsible for authenticating 
 * user credentials. Upon calling `login()`, it'll receive 
 * both `login` and `password` from the user, in order to 
 * open a file (contas.txt - which contains all user data
 * and verify that the credentials are correct.
 */
int login(void){
    system("clear"); /* clear terminal */
    /* allocate memory for user login and password */ 
    char *login = (char *)malloc(MAX_CHAR * sizeof(char *));
    char *password = (char *)malloc(MAX_CHAR * sizeof(char *));
    printf("Login: ");
    scanf("%s", login);
    printf("Senha: ");
    scanf("%s", password);
    /* open file containning user credentials w/ read-only permission */
    const char *path = "../database/auth/usuario.txt";
    FILE *fp = fopen(path, "r");
    /* create variable to hold current line's content and compare to user input */
    char *lineContent = (char *)malloc(MAX_CHAR * sizeof(char *));
    while (fgets(lineContent, MAX_CHAR, fp) != NULL){
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