#include <stdio.h>
#include <stdlib.h>


int		max(int* tab, unsigned int len)
{
   int max;
   int i = 0;

    if (!len)
        return 0;
   while (len--)
   {
	   if (tab[i] > tab[i + 1])
	        max = tab[i];
       i++;
       //len--;
   }
    return (max);
}

int main()
{
    int *tab;

    if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
    tab[0] = 313;
    tab[1] = 213;
    tab[2] = 0;
    printf("the max is = %d\n", max(tab, 3));
}