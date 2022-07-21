/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:03:50 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/13 19:46:00 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

int main(void)
{
	char *str1;
	char *str2;
	char *str3;

	t_list *ptr;

	str1 = "The beginning node";
	str2 = "The second node";
	str3 = "The third node";

	printf("--Node before---\n");
	ptr = ft_create_elem(str1);
	printf("%s\n", ft_create_elem(str1)->data);

	printf("---Nodes after---\n");
	printf("%s\n", ft_create_elem(str1)->data);
	ft_list_push_back(&ptr, str2);
	printf("%s\n", ptr->next->data);
	ft_list_push_back(&ptr, str3);
	printf("%s\n", ptr->next->next->data);
	return (0);
	}

