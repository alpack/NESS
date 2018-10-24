/*


    PROTOTIPO MENU VIAJANTE


*/

#include <stdio.h>
#include <string.h>
#include ".../include/menuViajante.h"

/* CRIA LOOP PARA FICAR CHAMANDO FUNÇÃO */
int menuViajante(char *user) {
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


void Mapa(char *user) {
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

void Quest(char *user) {
    /* ACESSO AS QUESTS */
}

void Menu(char *user) {
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

void inbox(char *user) {
    /* ACESSA A CAIXA DE MENSAGENS */
}

void changeInfo(char *user) {
    /* changes the info that the user want */
    system("clear");
    int case;
    char archive[] = strcat(user, ".txt");  // gets the user card (file)
    char arcDir[] = strcat("/database/auth/", archive);
    char info[MAX_CHAR];
    char line[BUFFER_SIZE];
    FILE *file = fopen(arcDir, "r+");
    /* shows the actual information in the database */
    printf("Informações:\n\n");
    for (int count = 0; count != EOF; count++)
        printf("Linha %d: %s\n", count, lineContent);
    /* gets the information to be edited */
    printf("Digite o que você deseja editar: ");
    scanf("%s", info);
    //
    /* NEEDS TO KNOW WHAT INFORMATION CAN BE EDITED */
    fclose(file);
    /* check if the user wants to edit more information */
    char checker;
    printf("Você deseja editar outra informação?[s/n]: ");
    scanf("%c", &check);
    if (check == 's') {
        changeInfo(user);
    }else {
        exit(0);
    }
}

void changeHab(char *user) {
    /* MODIFICA HABILIDADES */
}

void addHab(char *user) {
    /* add new hability to user information */
    system("clear");
    char newHab[MAX_CHAR];
    char archive[] = strcat(user, ".txt");  // gets the user card (file)
    FILE *file = fopen(archive, "r+");
    /* gets the new hability to insert */
    printf("Digite a habilidade que deseja adicionar: ");
    scanf("%s", newHab);  // needs to input with space
    /* check if it exists */
    char check[] = strcat(newHab, ".txt");
    char checkDir[] = strcat("/database/habilidades/", check);
    FILE *checkfile = fopen(checkDir, "a+");
    if (checkfile) {
        fprintf(checkfile, "%s\n", user);  // OBS: if the format of the database changes, change this function
    }else {   // creates a new file for the hability if it don't exists
        checkfile = fopen(checkDir, "w");
        fprintf(checkfile, "%s\n", user);
    }
    fclose(checkfile);
    /* now check if the user wants to add more habilities */
    char checker;
    printf("Você quer adicionar mais habilidade?[s/n]: ");
    scanf("%d", &c);
    if (checker == 's') {
        addHab(user);
    }else {
        exit(0);
    }
}

void removeHab(char *user) {
    /* REMOVER HABILIDADES */
}

int search(FILE *fp, char *string){ /* custom function from search.c */
    /* initialize variables to hold string frequency, location, and line content*/
    int results = 0, line = 0;
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        if (strstr(lineContent, string)){
            // printf("Palavra encontrada na linha: %d\n", line);
            // printf("%s\n", lineContent);
            results++;
        }
        line++;
    }
    return line;
}
