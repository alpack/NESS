/*


    PROTOTIPO MENU VIAJANTE


*/
// NEEDS TO CREATE FUNCTION TO REMOVE LINES FROM ARCHIVES
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
        scanf("%d", &choice);

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
    int choice;

    printf("Escolha uma opção e digite o numero correspondente:\n");
    printf("\n1. Caixa de mensagens\n")
    printf("2. Modificar informações básicas\n");
    printf("3. Alterar habilidades\n");
    printf("4. Acrescentar novas habilidades\n");
    printf("5. Remover habilidades\n");
    printf("6. Volta ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &choice);

    switch (check) {
        case 1:
            /* ACESSA A CAIXA DE MENSAGENS (criar função)*/
        case 2:
            changeInfo(user);
        case 3:
            changeHab(user);
        case 4:
            addHab(user);
        case 5:
            removeHab(user);
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
    while (line != EOF) {
        fgets(line, BUFFER_SIZE, arcDir);
        printf("%s\n", line);
    }
    /* gets the information to be edited */
    printf("\nDigite o que você deseja editar: ");
    scanf("%s", info);
    //
    /* NEEDS TO KNOW WHAT INFORMATION CAN BE EDITED */
    free(archive);
    free(arcDir);
    free(info);
    free(line);
    fclose(file);
    /* check if the user wants to edit more information */
    char choice;
    printf("Você deseja editar outra informação?[s/n]: ");
    scanf("%c", &choice);
    if (choice == 's') {
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
    /* check if hability file exists */
    char check[] = strcat(newHab, ".txt");
    char checkDir[] = strcat("/database/habilidades/", check);
    FILE *checkfile = fopen(checkDir, "a+");
    if (checkfile) {
        fprintf(checkfile, "%s\n", user);  // OBS: if the format of the database changes, change this function
    }else {   // creates a new file for the hability if it don't exists
        checkfile = fopen(checkDir, "w");
        fprintf(checkfile, "%s\n", user);
    }
    /* ADD HABILITY TO USER CARD (need to code) */
    free(newHab);
    free(archive);
    free(check);
    free(checkDir);
    fclose(checkfile);
    /* now check if the user wants to add more habilities */
    char choice;
    printf("Você quer adicionar mais habilidade?[s/n]: ");
    scanf("%d", &choice);
    if (choice == 's') {
        addHab(user);
    }else {
        exit(0);
    }
}

void removeHab(char *user) {
    system("clear");
    char hability[MAX_CHAR];
    /* SHOW THE HABILITIES IN THE USER CARD */
    printf("Digite a habilidade que você quer remover:\n");
    scanf("%d", hability);
    /* REMOVES FROM THE HABILITY ARCHIVE */
    char nameoffile[] = strcat(hability, ".txt");  // lembrar de mudar de acordo com o modo que for amazenar dados
    char pathoffile[] = strcat("/database/habilidades/", nameoffile);
    FILE *file = (pathoffile, "r+");
    /* FUNCTION TO REMOVE THE LINE */
    free(hability);
    free(nameoffile);
    free(pathoffile);
    fclose(file);
    /* now removes the hability from the user card */
    char nameofthefile[] = strcat(user, ".txt");
    char pathofthefile[] = strcat("/database/auth/", nameofthefile);
    file = fopen(pathofthefile, "r+");
    /* FUNCTION TO REMOVE THE LINE */
    free(nameofthefile);
    free(pathofthefile);
    fclose(file);
    /* ASK IF THE USER WANTS TO REMOVE MORE HABILITIES */
    char choice;
    printf("Você deseja remover outras habilidades?[s/n]: ");
    scanf("%c\n", &choice);
    if (choice == 's') {
        removeHab(user);
    }else {
        exit(0);
    }
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
    free(lineContent);
    return line;
}
