//
// Created by marli on 16/11/2023.
//

#ifndef ALGOPROJECT_LIST_H
#define ALGOPROJECT_LIST_H
#include "cellule.h"

typedef struct s_d_list
{
    int max_lvl;
    struct s_d_cell **head;
} t_d_list;

t_d_list createEmptyList(int);

void insertCellHead(t_d_cell*, t_d_list*);

void displayCellLvl(t_d_list liste, int lvl);

void displayList(t_d_list liste);

void insertCellAtlist(t_d_cell* cel,t_d_list* liste);

#endif //ALGOPROJECT_LIST_H
