/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:57:56 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/10 21:29:08 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	nmatch(char *s1, char *s2)
{
	if (ft_strcmp(s2, "*") == 0 || ft_strcmp(s1, s2) == 0)
		return (1);
	if (s1[0] == '\0')
		return (0);
	if(s1[0] == s2[0])
		return (1 + nmatch(s1 + 1, s2 + 1 ));
	if (s2[0] == '*')
		return (1 + (nmatch(s1 + 1, s2) || nmatch(s1, s2 + 1)));
	return (0);
}

int main(void)
{
	printf("Match test: abcbd & *b* %d\n", nmatch("abcbd", "*b*"));
	printf("Match test: abc a** %d\n", nmatch("abc", "a**"));
	return(0);
}
