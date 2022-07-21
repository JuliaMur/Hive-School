/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:05:00 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/02 11:19:39 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	 test;
	
	int*	testpointer;

	test = 10;

	testpointer = &test;

	printf	("Number before function: %d\n", test);
    ft_ft(testpointer);
	printf	("Number after the function: %d\n", test);
	return (0);
}



