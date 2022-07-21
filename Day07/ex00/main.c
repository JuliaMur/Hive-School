/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:00:19 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/07 20:01:19 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	str[] = "DuplicateMe";
	char	*duplicate;
	printf("original: %s\n", str);
	duplicate = ft_strdup(str);
	printf("origafte: %s\n", str);
	printf("the copy: %s\n", duplicate);
}
