//
// Created by marli on 16/11/2023.
//
#include "cellule.h"
#include <stdio.h>
#include <stdlib.h>

t_d_cell* createCell(int val, int niv){
    t_d_cell *cellule = (t_d_cell*)malloc(sizeof (t_d_cell));
    cellule->value = val;
    cellule->level = niv;
    cellule->next = (t_d_cell**)malloc(niv * sizeof (t_d_cell*));
    for (int i=0; i < niv;i++){
        cellule->next[i] = NULL;
    }
    return cellule;
}