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

#include "../include/authMenu.h"

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