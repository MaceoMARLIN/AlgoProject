//
// Created by Jo on 10/12/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "partie 3.h"
#include "cellule.h"
#include "list.h"

#define TAILLE_MAX 200

char* scanString(void){
    char* String = (char*) malloc(TAILLE_MAX * sizeof(char));
    printf("Veuillez saisir l'objet du rendez-vous : ");
    scanf("%s", String);
    if (strlen(String) > TAILLE_MAX){
        String = (char*)realloc(String,TAILLE_MAX + (strlen(String)-TAILLE_MAX)*sizeof(char));
    }
    return String;


}

