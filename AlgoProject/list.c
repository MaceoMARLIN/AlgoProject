//
// Created by marli on 16/11/2023.
//
#include "list.h"
#include "cellule.h"
#include <stdio.h>
#include <stdlib.h>

t_d_list createEmptyList(int niv_max){
    t_d_list liste;
    liste.head = (t_d_cell**)malloc(niv_max * sizeof (t_d_cell*));
    liste.max_lvl = niv_max;
    for (int i=0; i < niv_max;i++){
        liste.head[i] = NULL;
    }
    return liste;
}

void insertCellHead(t_d_cell* cel, t_d_list* liste){
    if (cel->level > liste->max_lvl){
        printf("Erreur : niveau trop élevé\n");
        return;
    }
    for (int i=0; i < cel->level; i++){
        cel->next[i] = liste->head[i];
        liste->head[i] = cel;
    }
}

void displayCellLvl(t_d_list liste, int lvl){
    t_d_cell* tmp = liste.head[lvl];
    printf("[list head_%d]-->",lvl);
    while (tmp != NULL){
        printf("[ %d|@ ]-->",tmp->value);
        tmp=tmp->next[lvl];
    }
    printf("NULL \n");
}

void displayList(t_d_list liste){
    for (int i=0; i < liste.max_lvl; i++){
        displayCellLvl(liste, i);
    }
}

void insertCellAtlist(t_d_cell* cel,t_d_list* liste){
    int lvl=cel->level;
    t_d_cell* tmp;
    t_d_cell* tmp1;
    for (int i=0; i < lvl; i++){
        if (liste->head[i] == NULL || liste->head[i]->value >= cel->value){
            cel->next[i] = liste->head[i];
            liste->head[i] = cel;
        }
        else{
            tmp = liste->head[i];
            tmp1 = tmp->next[i];
            while (tmp->next[i] != NULL && tmp1->value < cel->value){
                tmp = tmp->next[i];
                tmp1 = tmp->next[i];
            }
            tmp->next[i] = cel;
            cel->next[i] = tmp1;

        }

    }
}