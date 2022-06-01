#include <stdio.h>
#include <stdlib.h>

int n_count(int n)
{
    int len = 0;

    if (n == 0)
        return 1;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return(len);
}

char *ft_itoa(int nb)
{
    int len;
    int i = 0;
    long n;
    char *itoa;

    n = (long)nb;
    len = n_count(nb);
    if (!(itoa = malloc(len)))
        return 0;
    itoa[--len] = '\0';
    if(n == 0)
        itoa[0] = '0';
    if(n < 0)
    {
        itoa[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        itoa[len] = (n % 10) + '0';
        len--;
        n /= 10;
    }
    return (itoa);
}

int main()
{
    printf("%s\n", ft_itoa(-1003092));
}