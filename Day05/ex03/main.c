/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:18:59 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 17:40:22 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	    char src[] = "dkdflfo";
		char dest[] = "gweerrw";

		printf("   src: %s\n", src);
		printf("   dest: %s\n", dest);
	    char	*dest_ptr = ft_strcpy(dest, src);
	
	printf("After    src: %s\n", src);
	printf("after    dest: %s\n", dest);
	printf("after dest_ptr: %s\n", dest_ptr);	
	return (0);
}
