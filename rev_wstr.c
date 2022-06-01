#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *s)
{
	int i = 0;
	int i2 = 0;
	char **split;

	if (!(split = (char **)malloc((sizeof(char **) * 100))))
		return NULL;
	while (s[i] == ' ')
		i++;
	while (s[i])
	{
		if (s[i] > 32)
		{
			int i3 = 0;
			if (!(split[i2] = malloc(1000)))
				return NULL;
			while (s[i] > 32)
			{
				split[i2][i3] = s[i];
				i3++;
				i++;
			}
			split[i2][i3] = 0;
			i2++;
		}
		else
			i++;
	}
	split[i2] = 0;
	return (split);
}

int		main(int ac, char **av)
{
	int i = 0;
    char **words;

    words = ft_split(av[1]);
    while (words[i])
        i++;
    i--;
    while (i >= 0)
    {
        ft_putstr(words[i]);
       // if (i > 0)
            write(1, " ", 1);
        i--;
    }
    write(1, "\n", 1);
    return 0;
}