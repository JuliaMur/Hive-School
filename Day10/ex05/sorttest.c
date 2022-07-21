/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:10:47 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/13 14:09:26 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sort_ints(int num1, int num2)
{
    if (num1 < num2)
    return (-1);
   
   	else if (num1 == num2)
    return(0);
   
   	else
    return(1);

	// return (num1 - num2);
    
}

int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int i =0;
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
        return(0);
        i++;
    }
    return (1);
}


int main()
{
    int tab1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab2[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int tab3[3] = {-1, -3, 8};
    int tab4[5] = {6, 8, 10, 15, 18};

    int (*f)(int, int);
    f = &sort_ints;

    int test ;
    int test2;
    int test3;
    int test4;

    test = ft_is_sort(tab1, 9, f);
    test2 = ft_is_sort(tab2, 9, f);
    test3 = ft_is_sort(tab3, 3, f);
    test4 = ft_is_sort(tab4, 5, f);
    printf("Test 1  %d\n", test);
    printf("Test 2  %d\n", test2);
    printf("Test 3  %d\n", test3);
    printf("Test 4  %d", test4);
    return 0;
}
