#include "../include/search.h"

int search(FILE *fp){
    /* initialize variables to hold string frequency, location, and line content*/
    int results = 0, line = 0, value=0;
    char *lineContent = (char *)malloc(BUFFER_SIZE * sizeof(char *));
    do
    {
        fscanf(fp,"%s , %d", lineContent, &value);
        printf("%s -> %d\n", lineContent, value);
    }
    while(!feof(fp));
   
    //while (fgets(lineContent, BUFFER_SIZE, fp) != NULL){
        
    //}
    /* free allocated memory and close file */
    
    fclose(fp);
    return results;
}