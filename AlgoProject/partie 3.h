//
// Created by Jo on 10/12/2023.
//

#ifndef ALGOPROJECT_PARTIE_3_H
#define ALGOPROJECT_PARTIE_3_H
#include "cellule.h"
#include "list.h"

typedef struct s_contact
{
    char* nom;
    char* prenom;
} t_contact, p_contact;

typedef struct s_date{
    int jour ;
    int mois ;
    int annee;
}t_date, p_date;

typedef struct s_temps{
    int heure;
    int minute;
}t_temps, p_temps;

typedef struct s_rdv{
    t_date date;
    t_temps heure;
    t_temps duree;
    char* objet;
    struct s_rdv* next;
}t_rdv, p_rdv;

typedef struct s_entry{
    t_contact contact;
    t_rdv* rdv;
}t_entry;



char* scanString(void);
int SearchContact();
void CreateContactList();
void CreateContact(t_d_list * list);
void CreateRdv();
void DisplayRdv();


#endif //ALGOPROJECT_PARTIE_3_H
