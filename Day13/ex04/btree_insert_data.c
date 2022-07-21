/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:25:00 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/15 22:18:00 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (*root == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	if (cmpf((*root)->item, item) >= 0)
		btree_insert_data(&(*root)->right, item, cmpf);
}
