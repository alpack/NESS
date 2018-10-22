/* Menu: Main */
#include "../include/essentials.h"
#include "../include/mainMenu.h"
#include "../include/authentication.h"
#include "../include/signup.h"

void mainMenu(void){
    int choice = 0;
    char* string;
    do{
        system("clear");
        printf("\n MENU INICIAL\n");
        printf("\n  1: Criar Conta\n");
        printf("\n  2: Entrar\n");
        printf("\n  3: Sair\n\n");
        scanf("%d", &choice);
    } while(!choice);
    switch(choice){ 
        case 1:
            while(signup() == 1)
                signup();
            mainMenu();
            break;
        case 2:
            while(authentication() == 1)
                authentication();
            mainMenu();
            break;
        case 3:
            exit(0);
    }
}