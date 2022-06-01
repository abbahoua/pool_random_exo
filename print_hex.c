#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int     ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (s[i] == ' ')
        i++;
    if (s[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (s[i])
    {
        res = (res * 10) + s[i] - '0';
        i++;
    }
    return (res * sign);
}

void    ft_putnbr_hexa(int n)
{
    if (n >= 16)
    {
        ft_putnbr_hexa(n / 16);
        ft_putnbr_hexa(n % 16);
    }
    if (n < 16)
        ft_putchar(n + 'W');
    if (n < 10)
        ft_putchar(n + '0');
}

int main (int ac, char **av)
{
    if (ac == 2)
        ft_putnbr_hexa(ft_atoi(av[1]));
    write (1, "\n", 1);
}