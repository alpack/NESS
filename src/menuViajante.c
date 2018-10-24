/*


    PROTOTIPO MENU VIAJANTE


*/

#include <stdio.h>
#include ".../include/menuViajante.h"

/* CRIA LOOP PARA FICAR CHAMANDO FUNÇÃO */
int menuViajante(void) {
    while(1) {
        system("clear");
        int choice;

        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Mapa\n");
        printf("2. Menu\n");
        printf("3. Sair\n")
        printf("\nDigite sua opção: ");
        scanf("%d", &check);

        switch (choice) {
            case 1:
                Mapa();
                continue;
            case 2:
                Menu();
                continue;
            case 3:
                return 0;
            case _:
                printf("Opção inválida meu caro.\n");
                continue;
        }
    }
}


void Mapa(void) {
    system("clear");
    int check;

    printf("Escolha uma opção e digite o numero correspondente:\n");
    printf("\n1. Quests\n");
    printf("2. Voltar ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &check);

    switch (check) {
        case 1:
            /* ACESSA AS QUESTS */
        case 2:
            exit(0);
    }
}

void Quest(void) {
    /* ACESSO AS QUESTS */
}

void Menu(void) {
    system("clear");
    int check;

    printf("Escolha uma opção e digite o numero correspondente:\n");
    printf("\n1. Caixa de mensagens\n")
    printf("2. Modificar informações básicas\n");
    printf("3. Alterar habilidades\n");
    printf("4. Acrescentar novas habilidades\n");
    printf("5. Remover habilidades\n");
    printf("6. Volta ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &check);

    switch (check) {
        case 1:
            /* ACESSA A CAIXA DE MENSAGENS (criar função)*/
        case 2:
            /* MODIFICA INFORMAÇÕES (criar função)*/
        case 3:
            /* ALTERA HABILIDADES (criar função)*/
        case 4:
            /* ACRESCENTA NOVAS HABILIDADES (criar função)*/
        case 5:
            /* REMOVE HABILIDADES (criar função) */
        case 6:
            exit(0);
    }
}

void inbox(void) {
    /* ACESSA A CAIXA DE MENSAGENS */
}

void changeInfo(void) {
    /* MUDA AS INFORMAÇÕES */
}

void changeHab(void) {
    /* MODIFICA HABILIDADES */
}

void addHab(void) {
    /* ADICIONA NOVAS HABILIDADES */
}

void removeHab(void) {
    /* REMOVER HABILIDADES */
}
