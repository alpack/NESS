#ifndef MENUVIAJANTE_H
    #define MENUVIAJANTE_H

    #include <stdio.h>
    #include <string.h>
    #define MAX_CHAR 50
    #define BUFFER_SIZE 1024

    int menuViajante(char *user);
    void Menu(char *user);
    void Mapa(char *user);
    void Quests(char *user);
    void inbox(char *user);
    void Quest(char *user);
    void changeInfo(char *user);
    void changeHab(char *user);
    void addHab(char *user);
    void removeHab(char *user);
    int search(FILE *fp, char *string)

    #endif
