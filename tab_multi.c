#include <unistd.h>
#include <stdlib.h>
void    ft_putchar(char c)
{
    write (1, &c, 1); 
}

void    ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;

    while (s[i] == ' ')
        i++;
    while (s[i] && s[i] >= '0' && s[i] <= '9')
    {
        res = (res * 10) + s[i] - '0';
        i++;
    }
    return (res);
}

void    tab_multi(int n)
{
    int i = 1;
    int res;

    while (i < 10)
    {
        res = i * n;
        ft_putnbr(i);
        write (1, " x ", 3);
        ft_putnbr(n);
        write (1, " = ", 3);
        ft_putnbr(res);
        if (i != 9)
            ft_putchar('\n');
        i++;
    }
    
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        tab_multi (ft_atoi(av[1]));
    }
    ft_putchar('\n');
    return 0;
}