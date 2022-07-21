/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:03:50 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/13 20:40:45 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	char *str1;
	char *str2;
	char *str3;

	t_list *ptr;

	str1 = "One";
	str2 = "Two";
	str3 = "Three";

	printf("---Before---\n");
	ptr = ft_create_elem(str1);
	printf("%s\n", ptr->data);
	ft_list_push_front(&ptr, str2);
	ft_list_push_front(&ptr, str3);
	printf("---After---\n");
	printf("%s\n", ptr->data);
	printf("%s\n", ptr->next->data);
	printf("%s\n", ptr->next->next->data);
	return (0);
	}

