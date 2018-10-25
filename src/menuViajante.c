/*
 * 
 * 
 * 
 */

#include "../include/menuViajante.h"
#include "../include/authentication.h"
#include "../include/search.h"

void menuViajante(void) {
    system("clear");
    int choice = 0;
    do{
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Mapa\n");
        printf("2. Menu\n");
        printf("3. Sair\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
    }while(!choice);

    switch (choice) {
        case 1:
            Mapa();
            break;
        case 2:
            Menu();
            break;
        case 3:
            exit(0);
    }
}

void Mapa(void) {
    system("clear");
    int choice = 0;
    do{
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Quests\n");
        printf("2. Voltar ao menu\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
    }while(!choice);

    switch (choice){
        case 1:
            break;
        case 2:
            exit(0);
    }
}

void Quest(void) {
    system("clear");
    int choice = 0;
    do{
        printf("MENU DE QUESTS");
        printf("\n1. Acessar Questboard\n");
        printf("\n2. Buscar squads perto de você\n");
        printf("\n3. Convidar alguém para sua squad\n");
        printf("\n4. Sair.\n");
        scanf("%d", &choice);
    } while (!choice);

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            search();
        case 4:
            exit(0);
    }
}

void Menu(void) {
    system("clear");
    int choice = 0;
    do{
        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Caixa de mensagens\n");
        printf("2. Modificar informações básicas\n");
        printf("3. Alterar habilidades\n");
        printf("4. Acrescentar novas habilidades\n");
        printf("5. Remover habilidades\n");
        printf("6. Volta ao menu\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);
    } while (!choice);

    switch (choice) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            exit(0);
    }
}