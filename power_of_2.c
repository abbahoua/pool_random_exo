#include <stdio.h>

int power_of_2(int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return (1);
    else
        return (0);
}

int main()
{
    printf("%d\n",power_of_2(5));
}