#include <unistd.h>

void    str_capitalize(char *s)
{
    int i;

    i = 0;
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;
    write(1, &s[i], 1);
    while(s[++i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i] == '\t'))
            s[i] -= 32;
        write(1, &s[i], 1);
    }
}

int main(int ac, char **av)
{
   if (ac < 1)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while (i < ac)
        {
            str_capitalize(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}