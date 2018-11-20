#ifndef MENUVIAJANTE_H
    #define MENUVIAJANTE_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define MAX_CHAR 50
    #define BUFFER_SIZE 1024

    int menuViajante(char *user);
    void Mapa(char *user);
    void Quest(char *user);
    void Menu(char *user);
    void inbox(char *user);
    void changeInfo(char *user);
    void changeHab(char *user);
    void addHab(char *user);
    void removeHab(char *user);
    int search(FILE *fp, char *string);
    void removeLine(char *fileDir, char *stringFile, char *string);

    #endif
