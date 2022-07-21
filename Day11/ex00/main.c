/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:35:10 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/13 18:46:29 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	char	*str;

	str = "This is a new element";
	printf("%s", ft_create_elem(str)->data);
	return (0);
}
