#include <stdlib.h>
#include <stdio.h>

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

int main(){

    int i;

    i = 0;
    char **arr = ft_split("al3awd cv itoub 3lik");
    while (arr[i])
    {
        printf("%s\n", arr[i]);
		i++;
    }
    
}