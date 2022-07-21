/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:09:08 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/02 12:18:37 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
    int*	apoint;
	int*	bpoint;

	a = 10;
	b = 20;

	apoint = &a;
	bpoint = &b;

	printf ("A before: %d\n", a);
	printf ("B before: %d\n", b);

	ft_swap(apoint, bpoint);

	printf ("A after: %d\n", a);
	printf ("B after: %d\n", b);
	return (0);
}



