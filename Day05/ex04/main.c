/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:38:55 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 20:50:36 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
	char src[] = "I want to print this";
	char dest[] = "Gkfkdkdkkkdjskkkdjjsjjdllsj";
	
	ft_strncpy(dest, src, 10);
	printf("Copied string: %s\n", dest);
	return (0);
}
