/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:06:02 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/09 19:04:59 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

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
	if (ft_strlen(s1) == 0)
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
	printf("Match test: abcds & * %d\n", nmatch("abcds", "*"));
	printf("Match test: qwerty & qwer**r %d\n", nmatch("qwerty", "qwer**r"));
	return(0);
}

