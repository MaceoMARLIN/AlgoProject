#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "cellule.h"
#include "timer.h"

int main() {
    int random;
    t_d_list liste;
    startTimer();
    for (int i = 1; i <= 1000; i++) {
        liste = ListByLevel_array(i);
        random = rand();
        printf("%d - %d\n", random, i);
        ResearchVal(&liste, random);
    }
    stopTimer();
    displayTime();
    return 0;
}
