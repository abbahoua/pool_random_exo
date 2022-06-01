#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    int i2 = 0;
    int len = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            while (av[2][i2])
            {
                if (av[2][i2] == av[1][i])
                {
                    len++;
                    break;
                }
                i2++;
            }
            i++;
        }
        if (av[1][len] == 0)
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    write(1, "\n", 1);
}
