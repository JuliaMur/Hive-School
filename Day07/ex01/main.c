/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:09:29 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/07 20:32:43 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	*arr;
	int i = 0;
	int max = 20;
	int min = 10;
	int len = max - min;

	arr = ft_range(min, max);
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
		 }
	return (0);
}


