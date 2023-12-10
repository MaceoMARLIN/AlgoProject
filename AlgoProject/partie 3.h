//
// Created by Jo on 10/12/2023.
//

#ifndef ALGOPROJECT_PARTIE_3_H
#define ALGOPROJECT_PARTIE_3_H
#include "cellule.h"
#include "list.h"

typedef struct s_contact
{
    char nom;
    char prenom;
} t_contact;

typedef struct s_date{
    int jour ;
    int mois ;
    int annee;
}t_date;

typedef struct s_temps{
    int heure;
    int minute;
}t_temps;

typedef struct s_objet{
    char rdv;
}t_objet;


typedef struct s_rdv{
    t_contact contact;
    t_date date;
    t_temps heure;
    t_temps duree;
}t_rdv, p_rdv;

typedef struct s_agenda{
    t_contact contact;
    t_d_list rdv;
}t_agenda;

char* scanString(void);
void CreateContact(t_d_list * list);
void CreateRdv();


#endif //ALGOPROJECT_PARTIE_3_H
