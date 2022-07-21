/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:19:47 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/12 15:35:05 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	i = 0;
	result = malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
