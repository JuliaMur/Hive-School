/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anytest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:39:16 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/12 18:41:20 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    i++;
    return(i);
}


int ft_any(char **tab, int (*f)(char*))
{
    int i = 0;
    while (tab[i])
    {
        if (f(tab[i]) == 1)
        return (1);
       i++;
    }
    return(0);
}


int main()
{
    char *tab1[5] = {"a"};
    char *tab2[6] = {"Some"};
    
    int (*f)(char*);
    f = &ft_strlen;
    
    int test ;
    int test2;
    
    test = ft_any(tab1, f);
    test2 = ft_any(tab2, f);
    printf("Test 1 should return 1 %d\n", test);
    printf("Test 2 should return 0 %d", test2);
    return (0);
}
