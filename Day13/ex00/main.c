/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:06:52 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/15 22:27:26 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int	main(void)
{
	char *str;

	str = "This is a new node";
	printf("%s\n", btree_create_node(str)->item);
	return (0);
}
