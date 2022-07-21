/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:26:39 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/14 19:24:48 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	print(void *str)
{
	printf("%s", str);
}

int	main(void)
{
	t_btree *head;

	void (*applyf)(void *);
	applyf = &print;

	head = btree_create_node("1");
	head->left = btree_create_node("2");
	head->right = btree_create_node("3");
	head->left->left = btree_create_node("4");
	head->left->right = btree_create_node("5");
	head->right->left = btree_create_node("6");
	head->right->right = btree_create_node("7");

	printf("Prefix: ");
	btree_apply_prefix(head, applyf);
	printf("\nInfix: ");
	btree_apply_infix(head, applyf);
	printf("\nSuffix: ");
	btree_apply_suffix(head, applyf);
	return (0);
}


