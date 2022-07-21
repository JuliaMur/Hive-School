/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:57:59 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/15 20:07:11 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	new_node->left = 0;
	new_node->right = 0;
	new_node->item = item;
	return (new_node);
}	
