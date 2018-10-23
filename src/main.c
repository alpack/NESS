/*
 * This source file is composed by, and solely by,
 * the `main` function - responsible for driving all other programs.
 * Currently, the main function will call the `authMenuu` function, 
 * and display a series of choices for the user to make.
 */

#include <stdio.h>
#include "../include/authMenu.h"

int main(void){
    /* opens menu w/ signup, login, or leave options */
    authMenu();
    return 0; 
}
