/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:03:04 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 14:57:31 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
	printf("Test function.\n\n");
	printf("%d : expected\n%d:ft_atoi\n\n", atoi("42"),ft_atoi("42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("975246"), ft_atoi("975246"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("		8"), ft_atoi("		8"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("	 6"), ft_atoi("		 6"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi(""), ft_atoi(""));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-"), ft_atoi("-"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("--"), ft_atoi("--"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("+"), ft_atoi("+"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("++"), ft_atoi("++"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("  -005"), ft_atoi("  -005"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("0067"), ft_atoi("0067"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("\n  5"), ft_atoi("\n  5"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("42lmao"), ft_atoi("42lmao"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("---42"), ft_atoi("---42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("2147483648"), ft_atoi("2147483648"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-2147483649"), ft_atoi("-2147483649"));
	printf("Testing complete.\n");


return (0);
}	
