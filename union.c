/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <abbahoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:47:20 by abbahoua          #+#    #+#             */
/*   Updated: 2022/05/26 20:19:24 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j = 1;
    int tab[256] = {0};
    
    if (ac == 3)
    {
        while (j < 3)
        {
            i = 0;
            while (av[j][i])
            {
                tab[(int)av[j][i]] = 1;
                i++;
            }
            j++;
        }
        j = 1;
        while (j < 3)
        {
            i = 0;
            while (av[j][i])
            {
                if (tab[(int)av[j][i]] == 1)
                    write (1, &av[j][i], 1);
                tab[(int)av[j][i]] = 2;
                i++;
            }
            j++;
        }
    }
    write (1, "\n", 1);
    return 0;
}