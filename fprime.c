#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char *av[])
{
	int		i = 2;
	int		n;

	if (ac == 2)
	{
        n = atoi(av[1]);
        if (n == 1)
        {
            printf("1");
            return 0;
        }
        while (n > 1)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                if (n != i)
                    printf("*");
                n /= i;
                i--;
            }
            i++;
        }
	}
	printf("\n");
	return (0);
}