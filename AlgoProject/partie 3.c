//
// Created by Jo on 10/12/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "partie 3.h"
#include "cellule.h"
#include "list.h"
#define TAILLE_MAX 20

char* scanString(void){
    char* String = (char*) malloc(TAILLE_MAX * sizeof(char));
    scanf("%s", String);
    if (strlen(String) > TAILLE_MAX){
        String = (char*)realloc(String,TAILLE_MAX + (strlen(String)-TAILLE_MAX)*sizeof(char));
    }
    return String;
}


t_entry* createContact() {

    t_entry * entry = (t_entry*) malloc(sizeof(t_entry));

    t_contact contact;

    printf("Quel est ton nom ? (en minuscule) \n");
    contact.nom = "ren";

    printf("Quel est ton prenom ? (en minuscule) \n");
    contact.prenom = "John";

    entry->contact = contact;
    entry->rdv = NULL;

    return entry;
}

t_rdv * CreateRdv(){

    t_rdv* rdv = (t_rdv*)malloc(sizeof(t_rdv));
    rdv->objet = (char*)malloc(TAILLE_MAX* sizeof(char));

    printf("Quand le rdv aura lieu ? (ecrire sous la forme jj/mm/aaaa) \n");//Saisie sécurisée pour la date
    scanf("%d/%d/%d", &rdv->date.jour, &rdv->date.mois, &rdv->date.annee );
    while ( rdv->date.jour <= 0 || rdv->date.jour > 31 || 0 >= rdv->date.mois ||rdv->date.mois > 12 || rdv->date.annee < 0){
        printf("\n La saisie est incorrect veuillez ne pas oublier qu'un jour a 31 numéros et les mois ont 12 numéros. \n");
        printf("Quand le rdv aura lieu ? (ecrire sous la forme jj/mm/aaaa) \n");
        scanf("%d/%d/%d", &rdv->date.jour, &rdv->date.mois, &rdv->date.annee );
    }

    printf("\n A quelle heure aura lieu le rdv ? (ecrire sous la forme hh:mm) \n");// Saisie sécurisée pour l'heure de rdv
    scanf("%d:%d", &rdv->heure.heure, &rdv->heure.minute);
    while (rdv->heure.heure < 0 || rdv->heure.heure > 23 || rdv->heure.minute > 59 || rdv->heure.minute < 0 ){
        printf("\nLa saisie est incorrect veuillez ne pas oublier que une heure a 24 nombres et les minutes ont 60 nombres \n");
        printf("A quelle heure aura lieu le rdv ? (ecrire sous la forme hh:mm) \n");
        scanf("%d:%d", &rdv->heure.heure, &rdv->heure.minute);
    }

    printf("\n Combien de temps le rdv va prendre ? (Ecrire sous la forme hh:mm) \n"); // Saisie sécurisée pour la durée du rdv
    scanf("%d:%d", &rdv->duree.heure, &rdv->duree.minute);
    while ( rdv->duree.minute > 59 || rdv->duree.minute < 0 ){
        printf("\n La saisie est incorrect veuillez ne pas oublier que les minutes vont jusqu'à 60  \n");
        printf("A quelle heure aura lieu le rdv ? (ecrire sous la forme hh:mm) \n");
        scanf("%d:%d", &rdv->duree.heure, &rdv->duree.minute);
    }
    printf("Quel est l'objet de ce rdv ?\n");
    rdv->objet = scanString();
    rdv->next = NULL;

    return rdv;
}

int SearchContact(t_d_list list){
    char* s = (char*)malloc(3 * sizeof(char));
    int i;
    printf("Qui est le contact recherche ? (3 premieres lettres du nom)\n");
    scanf("%s", s);
    while (list.head[i] != NULL){


        }
    }



void DisplayRdv(t_entry entry){
    t_rdv* rdv = entry.rdv;
    printf("Voici le/les rendez-vous de %s %s\n\n", entry.contact.prenom, entry.contact.nom);
    while (rdv != NULL){
        printf("Date : %d/%d/%d\n", rdv->date.jour, rdv->date.mois, rdv->date.annee);
        printf("A %d:%d\n", rdv->heure.heure, rdv->heure.minute);
        printf("Duree : %d heures et %d minutes\n", rdv->duree.heure, rdv->duree.minute);
        printf("Objet: %s\n", rdv->objet);
        rdv = rdv->next;

    }




}