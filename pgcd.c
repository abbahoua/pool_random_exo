#include <stdlib.h>
#include <stdio.h>

int pgcd(int n1, int n2)
{
    unsigned int i = n1;

    while (n1 != 0)
    {
        if (n1 % i == 0 && n2 % i == 0)
            return (i);
        i--;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 3)
        printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
    else
        printf ("\n");
}