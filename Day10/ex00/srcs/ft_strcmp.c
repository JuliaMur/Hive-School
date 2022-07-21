/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:36:25 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/07 19:47:26 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
	{
		int i;

		i = 0;
		while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		return (s1[i] - s2[i]);
	}