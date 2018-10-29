/*


    PROTOTIPO MENU VIAJANTE


*/
// NEEDS TO CREATE FUNCTION TO REMOVE LINES FROM ARCHIVES
#include "../include/menuViajante.h"

/* CRIA LOOP PARA FICAR CHAMANDO FUNÇÃO */
int menuViajante(char *user) {
    while(1) {
        system("clear");
        int choice;

        printf("Escolha uma opção e digite o numero correspondente:\n");
        printf("\n1. Mapa\n");
        printf("2. Menu\n");
        printf("3. Sair\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Mapa(user);
                continue;
            case 2:
                Menu(user);
                continue;
            case 3:
                return 0;
            default:
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
    printf("\n1. Caixa de mensagens\n");
    printf("2. Modificar informações básicas\n");
    printf("3. Alterar habilidades\n");
    printf("4. Acrescentar novas habilidades\n");
    printf("5. Remover habilidades\n");
    printf("6. Volta ao menu\n");
    printf("\nDigite sua opção: ");
    scanf("%d", &choice);

    switch (choice) {
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
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char fileDir[MAX_CHAR] = "/database/auth/";
    //int case;
    strcat(userFile, ".txt");  // gets the user card (file)
    strcat(fileDir, userFile);
    char info[MAX_CHAR];
    char line[BUFFER_SIZE];
    FILE *file = fopen(fileDir, "r+");
    /* shows the actual information in the database */
    printf("Informações:\n\n");
    while (line != EOF) {
        fgets(line, BUFFER_SIZE, fileDir);
        printf("%s\n", line);
    }
    /* gets the information to be edited */
    printf("\nDigite o que você deseja editar: ");
    scanf("%s", info);
    //
    /* NEEDS TO KNOW WHAT INFORMATION CAN BE EDITED */
    free(userFile);
    free(fileDir);
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
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char newHab[MAX_CHAR];
    char userDir[MAX_CHAR] = "/database/auth/"; // user file directory
    char habDir[MAX_CHAR] = "/database/habilidades/"; // hability file directory
    strcat(userFile, ".txt");  // gets the user card (file)
    strcat(userDir, userFile);
    FILE *file = fopen(userDir, "r+");
    /* gets the new hability to insert */
    printf("Digite a habilidade que deseja adicionar: ");
    scanf("%s", newHab);  // needs to input with space
    /* check if hability file exists */
    strcat(newHab, ".txt");
    strcat(habDir, newHab);
    FILE *checkfile = fopen(habDir, "a+");
    if (checkfile) {
        fprintf(checkfile, "%s\n", user);  // OBS: if the format of the database changes, change this function
    }else {   // creates a new file for the hability if it don't exists
        checkfile = fopen(habDir, "w");
        fprintf(checkfile, "%s\n", user);
    }
    /* ADD HABILITY TO USER CARD (need to code) */
    free(newHab);
    free(userDir);
    free(habDir);
    fclose(checkfile);
    /* now check if the user wants to add more habilities */
    char choice;
    printf("Você quer adicionar mais habilidade?[s/n]: ");
    scanf("%c", &choice);
    if (choice == 's') {
        addHab(user);
    }else {
        exit(0);
    }
}

void removeHab(char *user) {
    system("clear");
    char hability[MAX_CHAR];
    char fileDir[] = "/database/habilidades/";
    /* SHOW THE HABILITIES IN THE USER CARD */
    printf("Digite a habilidade que você quer remover:\n");
    scanf("%s", hability);
    /* REMOVES FROM THE HABILITY ARCHIVE */
    strcat(hability, ".txt");  // lembrar de mudar de acordo com o modo que for amazenar dados
    strcat(fileDir, hability);
    FILE *file = (fileDir, "r+");
    /* FUNCTION TO REMOVE THE LINE */
    free(hability);
    free(fileDir);
    fclose(file);
    /* now removes the hability from the user card */
    char userFile[MAX_CHAR];
    strcpy(userFile, user);
    char pathofthefile[MAX_CHAR] = "/database/auth/";
    strcat(userFile, ".txt");
    strcat(pathofthefile, userFile);
    file = fopen(pathofthefile, "r+");
    /* FUNCTION TO REMOVE THE LINE */
    free(userFile);
    free(pathofthefile);
    fclose(file);
    /* ASK IF THE USER WANTS TO REMOVE MORE HABILITIES */
    char choice;
    printf("Você deseja remover outras habilidades?[s/n]: ");
    scanf("%c", &choice);
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
