/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:59:12 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/02 21:36:07 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)


	
{
	int j;
	int a;
	int b;
	j = ft_iterative_factorial (1);
	
	a = ft_iterative_factorial (0);
	b = ft_iterative_factorial (-5);
	
	printf ("Test %d %d %d:", j,a,b);
	return (0);
}
