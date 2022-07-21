/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:23:20 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/16 14:46:52 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h> 
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *));

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->item = item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	if (root->item)
		applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}

int	ft_strcmp(void *s1, void *s2)
{
	int	i;

	i = 0;
	while ((((char *)s1)[i] != '\0') && (((char *)s1)[i] == ((char *)s2)[i]))
		i++;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

void	print(void *str)
{
	printf("%s ", str);
}

int	main(void)
{
	t_btree	*head;
	head = NULL;
	// head = btree_create_node("1");

	btree_insert_data(&head, "1111111", &ft_strcmp);
	btree_insert_data(&head, "22222222", &ft_strcmp);
	btree_insert_data(&head, "33333", &ft_strcmp);
	btree_insert_data(&head, "4444", &ft_strcmp);
	btree_insert_data(&head, "333", &ft_strcmp);
	btree_insert_data(&head, "22", &ft_strcmp);
	btree_insert_data(&head, "1", &ft_strcmp);
	btree_apply_prefix(head, &print);
	return (0);
}
