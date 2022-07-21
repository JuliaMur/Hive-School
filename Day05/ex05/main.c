/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:17:49 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 21:29:07 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char stack[] = "helloworld";
	char needtofind[] = "hello";
    char *findit;

	findit = ft_strstr(stack, needtofind);
	printf("Our word is: %s\n", findit);
	return (0);
}
