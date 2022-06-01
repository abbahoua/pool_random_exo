#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int n)
{
    int nb;

    if (n < 0)
    {   
        ft_putchar('-');
        nb = -n;
    }
    else
        nb = n;
    if (n < 10)
        ft_putchar(nb + '0');
    if (n > 9)
    {
        ft_putnbr(nb / 10 + '0');
        ft_putnbr(nb % 10 + '0');
    }
}

int main(int ac, char **av)
{
    ft_putnbr(ac - 1);
    ft_putchar('\n');
}