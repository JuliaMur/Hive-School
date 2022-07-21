/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:09:48 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/07 18:43:54 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	new = malloc(sizeof(*src) * len + 1);
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i ++;
	}
	new[i] = '\0';
	return (new);
}
