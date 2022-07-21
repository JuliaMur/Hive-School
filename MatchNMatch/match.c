/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:07:56 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/09 19:20:05 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
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

int	match(char *s1, char *s2)
{
	if (ft_strcmp(s2, "*") == 0 || ft_strcmp(s1, s2) == 0)
		return (1);
	if (ft_strlen(s1) == 0)
		return (0);
	if(s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	if (s2[0] == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}

int main(void)
{
	printf("Match test: abc & bcd %d\n", match("abc", "bcd"));
	printf("Match test: abc abc %d\n", match("abc", "abc"));
	printf("Match test: abcds & * %d\n", match("abcds", "*"));
	printf("Match test: main.c & *.c %d\n", match("main.c", "*.c"));
	printf("Match test: ft_putstr.c & ft*put*.* %d\n", match("ft_putstr.c", "ft*put*.*"));
	return(0);
}

