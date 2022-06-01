/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range&rrange.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbahoua <abbahoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:17:16 by abbahoua          #+#    #+#             */
/*   Updated: 2022/05/28 13:54:46 by abbahoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    *ft_range(int min, int max)
{
    int *range;
    int i = 0;

    if (min > max)
        range = (int *)malloc((sizeof(int)) * (min - max) + 1);
    else
        range = (int *)malloc((sizeof(int)) * (max - min) + 1);
    while (max > min)
    {
        range[i] = min; 
        min++;
        i++;
    }
    range[i] = min;
    while (min > max)
    {
        range[i] = min;
        min--;
        i++;
    }
    range[i] = min;
    return (range);
}

int    *ft_rrange(int min, int max)
{
    int *range;
    int i = 0;

    if (min > max)
        range = (int *)malloc((sizeof(int)) * (min - max) + 1);
    else
        range = (int *)malloc((sizeof(int)) * (max - min) + 1);
    while (max > min)
    {
        range[i] = max; 
        max--;
        i++;
    }
    range[i] = max;
    while (min > max)
    {
        range[i] = max;
        max++;
        i++;
    }
    range[i] = max;
    return (range);
}

int main()
{
    int i  = 0;
    int min = 0;
    int max = -3;
    int *tab = ft_rrange(min, max);
    int size = min - max;
    while (i <= size)
    {
        printf("%d\n",tab[i]);
        i++;
    }
}