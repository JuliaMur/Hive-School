/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maptest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:31:25 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/12 15:33:07 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int foo(int x)
{
    return(x + 1);
}

int *ft_map(int *tab, int length, int (*f) (int))
{
    int *result;
    int i;
    
    i = 0;
    result = malloc(sizeof(int) * length);
    while (i < length)
    {
        result[i] = f(tab[i]);
        i++;
    }
    return(result);
}

int main()
{
    int tab1[5] = {1, 2, 3, 4, 5};
    int *map_result;
    int i = 0;
    int (*f) (int);
    f = &foo;
    map_result = ft_map(tab1, 5, f);
    while (i < 5)
    {
    printf("%d", map_result[i]);
    i++;
    }

    return 0;
}
