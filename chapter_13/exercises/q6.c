/*
Improve the planet.c program so that it ignores case when comparing the cmd line args to the planets array 
*/

/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int caseInsensitiveStrCmp(char str1[], char str2[]);

int main(int argc, char *argv[]){

    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    
    int i, j;

    for(i = 1; i < argc; i++){
        for(j = 0; j < NUM_PLANETS; j++){
            if(caseInsensitiveStrCmp(argv[i], planets[j]) == 1){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if(j == NUM_PLANETS){
            printf("%s is not a planet.\n", argv[i]);
        }
    }
    return 0;
}

int caseInsensitiveStrCmp(char str1[], char str2[]){

    int i = 0;

    if(strlen(str1) != strlen(str2)){
        return 0;
    }

    while(str1[i] != '\0'){
        if(toupper(str1[i]) != toupper(str2[i])){
            return 0;
        }
        i++;
    }

    return 1;
    
}