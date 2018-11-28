/*
 * DESCRIPTION: 
 * > This source file provides the program a
 * > function to find the expected *path* of file
 * > in the *database folder*.
 * INPUT:
 * > Entity: what the user is looking for
 *    example: quests, guilds, users.
 * > Attribute: a filter/characteristic of the entity
 *    example: available-quests, cesar, user-credentials.
 * > ID: unique reference to an attribute.
 *    example: porto-digital-area, tribe-one, your-username
 * OUTPUT:
 * > The function will return a *char pointer* (string).
 *    example: "../database/path/to/file.txt"
 * EXAMPLE:
 * > char *path = setpath(entity, attribute, id);
 * > free(path); #"free" varible since setPath() 
 *                allocated memory for it.
 */

#include "../include/setPath.h"

char* setPath(char* entity, char* attribute, char *id){
    char *database = "../database/", *extension = ".txt";
    int PATH_SIZE = strlen(database) + strlen(entity) + strlen(attribute) + strlen(id) + strlen(extension) + 3;
    char path[PATH_SIZE], *PATH = malloc(PATH_SIZE);
    snprintf(path, sizeof(path), "%s%s/%s/%s%s", database, entity, attribute, id, extension);
    strcpy(PATH, path);
    return PATH;
}