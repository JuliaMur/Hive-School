/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:46:11 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/14 18:56:28 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	if (root->left)
		btree_apply_infix(root->left, applyf);
	if (root->item)
		applyf(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
