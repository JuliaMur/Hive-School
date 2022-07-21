/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counttest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:31:28 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/12 19:32:25 by ikosheva         ###   ########.fr       */
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


int ft_count_if(char **tab, int (*f)(char*))
{
    int i = 0;
    int count = 0;
    
    while (tab[i])
    {
        if (f(tab[i]) == 1)
        count++;
        i++;
    }
    return(count);
}


int main()
{
    char *tab1[5] = {"t", "h", "i", "s", 0};
    char *tab2[6] = {"some", "text","here","for", "test", 0};
    
    int (*f)(char*);
    f = &ft_strlen;
    
    int test ;
    int test2;
    
    test = ft_count_if(tab1, f);
    test2 = ft_count_if(tab2, f);
    printf("Test 1 should count %d\n", test);
    printf("Test 2 should return 0 %d", test2);
    return 0;
}
