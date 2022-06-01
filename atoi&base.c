#include <stdio.h>
#include <stdlib.h>

// int ft_atoi(char *s)
// {
//     int i = 0;
//     int sign = 1;
//     int res = 0;
//     int base = 10;

//     while (s[i] == ' ')
//         i++;
//     if (s[i] == '-')
//     {
//         sign *= -1;
//         i++;
//     }
//     else
//         sign = 1;
//     while (s[i] && s[i] >= '0' && s[i] <= '9')
//     {
//         res = (res * base) + s[i] - '0';
//         i++;
//     }
//     return (res * sign);
// }

// int main()
// {
//     printf("%d\n", ft_atoi(" +-21"));
//     printf("ORIGIN = %d\n", atoi(" +-21"));
// }

int	ft_atoi_base(const char *s, int str_base)
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
    else
        sign = 1;
    while (s[i])
    {
        if (s[i] >= '0' && s[i] <= '9')
            res = (res * str_base) + s[i] - '0';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            res = (res * str_base) + s[i] - '7';
        else if (s[i] >= 'a' && s[i] <= 'z')
            res = (res * str_base) + s[i] - 'W';
        i++;
    }
    return (res * sign);
}

int main()
{
    printf("%d\n", ft_atoi_base("-234" , 16));
}