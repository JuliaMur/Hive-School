/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:21:56 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/13 21:11:03 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}			t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
#endif
