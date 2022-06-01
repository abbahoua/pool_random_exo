#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                ft_swap(&tab[i], &tab[j]);
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int i  = 0;
    int tab[] = {8,2,1};
    size_t  len = sizeof(tab) / sizeof(tab[0]);
    // sort_int_tab(tab, len);
    while (tab[i] && i < len)
    {
        printf("%d\n",tab[i]);
        i++;
    }
}