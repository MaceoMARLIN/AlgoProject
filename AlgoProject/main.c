#include <stdio.h>
#include "list.h"
#include "cellule.h"
#include "partie 3.h"

int main() {
    t_d_list liste = createEmptyList(5);
    t_d_cell* cel = createCell(59,2);
    t_d_cell* cel1 = createCell(53,3);
    t_d_cell* cel2 = createCell(1,4);
    t_d_cell* cel3 = createCell(91,5);

    insertCellAtlist(cel3, &liste);
    insertCellAtlist(cel2, &liste);
    insertCellAtlist(cel1, &liste);
    insertCellAtlist(cel, &liste);
    displayList(liste);

    printf("%d", ResearchVal( &liste, 46 ));
    printf("%d", DichoResearch( &liste, 46 ));
    t_entry entry = createContact();
    entry.rdv = CreateRdv();
    DisplayRdv(entry);

    return 0;
}