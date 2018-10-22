/**** Include Guard: Essentials.h ****/
#ifndef ESSENTIALS_H_

#define ESSENTIALS_H_
/* Include Guard: Libraries */ 
#ifndef STDIO_H_
#include <stdio.h>
#define STDIO_H_
#endif //stdio.h
#ifndef STDLIB_H_
#include <stdlib.h>
#define STDLIB_H_
#endif //stdlib.h
#ifndef STRING_H_
#include <string.h>
#define STRING_H_
#endif //string.h

/* DEFINE GLOBALS */
#define MAX_SIZE 30

/* TYPE DEFINITIONS */
#ifndef USER_T_
#define USER_T_
typedef struct user{ 
    char name[MAX_SIZE];
    int ID;
} User;
#endif //user

#endif //essentials.h