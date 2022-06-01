#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size){

    int i = 0;
    int swp;

    while (size > i)
    {
        if (tab[i] > tab[i + 1])
        {
            swp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swp;
            i = -1;
        }
        i++;
    }
}