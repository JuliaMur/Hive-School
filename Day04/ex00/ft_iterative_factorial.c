/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:54:48 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/02 21:51:11 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial  (int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if(nb < 0)
	{
		return (0);
	}

	while(i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
