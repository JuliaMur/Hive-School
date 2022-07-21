/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:22:55 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/02 12:06:42 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int	test;
	
	int*	ptr;
	int** 	ptr2;
	int***	ptr3;
	int****	ptr4;
	int*****	ptr5;
	int******	ptr6;
	int*******	ptr7;
	int********	ptr8;
	int*********	ptr9;

	test = 25;
	
	ptr = &test;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf	("Number before the function: %d\n", test);
	ft_ultimate_ft(ptr9);
	printf	("Number after the function: %d\n", test);
	return(0);
}
