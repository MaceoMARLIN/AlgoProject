//
// Created by marli on 16/11/2023.
//

#ifndef ALGOPROJECT_CELLULE_H
#define ALGOPROJECT_CELLULE_H

typedef struct s_d_cell
{
    int value;
    int level;
    struct s_d_cell **next;
} t_d_cell;

t_d_cell* createCell(int, int);

#endif //ALGOPROJECT_CELLULE_H
