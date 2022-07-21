/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:09:22 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/07 20:08:36 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int *arr_rng;

	if (min >= max)
		return(NULL);
	i = 0;
	arr_rng = malloc(sizeof(*arr_rng) * (max - min));
	while (i < (max - min))
	{
		arr_rng[i] = min + i;
		i++;
	}
	return(arr_rng);
}
