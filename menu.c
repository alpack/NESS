/*
about
*/
#include <stdio.h>

// DEFINES
#define ASSIST 1
#define HELP 2

// PROTOTYPE functions
int userInput(void); 
void output(int);
void mainMenu(void);
void softwareMenu(void);
void serviceMenu(void);
void deviceMenu(void);

// GLOBAL variables
int choice, softwareChoice, machineChoice, deviceChoice, moduleChoice;

// MAIN program
int main(void){ 
    int choice, num, result; 
    printf("Olá... *introdução aqui*\n");
    printf("1: Preciso de ajuda\n");
    printf("2: Quero ajudar\n");
    printf("0: Sair\n");
    printf("Selecione uma das opções acima:\n");
    
    choice = userInput();
    switch (choice){ 
        case HELP:{ 
            printf("HELP: Em que voce precisa de ajuda?:\n");
            mainMenu();
            break;
        }
        case ASSIST:{
            printf("ASSIST: Em que voce quer ajudar?\n");
            mainMenu();
            break;
        }
        default:
            printf("Escolha  invalida");
    }
    return 0; 
}

// ----- FUNCTIONS ------
int userInput(void){ 
    int input; 
    scanf("%d", &input); 
    return input; 
} 
  
void output(int number){ 
    printf("%d\n", number); 
} 

void mainMenu(void){
    do {
        system("clear");
        printf("\n MENU PRINCIPAL\n");
        printf("\n  1. Softwares\n");
        printf("\n  2. Serviços\n");
        printf("\n  3. Dispositivos\n");
        printf("\n  0. Sair\n");
        scanf("%d", &choice);
    } while((choice < 0) || (choice > 4));
    switch (choice){
        case 1:
            softwareMenu();
            break;
        case 2:
            serviceMenu();
            break;
        case 3:
            deviceMenu();
            break;
    }
}

void softwareMenu(void){
    do{
        system("clear");
        printf("\n MENU DE SOFTWARES\n");
        printf("\n  1. Adobe\n");
        printf("\n  2. Software 2\n");
        printf("\n  3. Software 3\n");
        printf("\n  0. Voltar ao Menu Anterior\n");
        scanf("%d", &softwareChoice);
    } while ((choice < 0) || (choice > 5));

    switch (softwareChoice){
        case 0:
            mainMenu();
            break;
    }
}

void serviceMenu(void){
    do{
        system("clear");
        printf("\n MENU SERVIÇOS\n");
        printf("\n  1. Cortadora Laser\n");
        printf("\n  2. Fresadora CNC\n");
        printf("\n  3. Ultimaker 3D\n");
        printf("\n  4. Uprint 3D\n");
        printf("\n  0. Voltar ao Menu Anterior\n");
        scanf("%d", &machineChoice);
    } while ((choice < 0) || (choice > 5));

    switch (machineChoice){
        case 0:
            mainMenu();
            break;
    }
}

void deviceMenu(void){
    do{
        system("clear");
        printf("\n MENU DISPOSITIVOS\n");
        printf("\n  1. Arduino\n");
        printf("\n  2. Raspberry Pi\n");
        printf("\n  3. Outro dispositivo\n");
        printf("\n  0. Voltar ao Menu Anterior\n");
        scanf("%d", &moduleChoice);
    } while ((choice < 0) || (choice > 5));

    switch (moduleChoice){
        case 0:
            mainMenu();
            break;
    }
}
