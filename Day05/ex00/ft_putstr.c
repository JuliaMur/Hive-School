/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:32:39 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 15:09:27 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_putstr(char *str)
{
    int	i;
    i = 0;
	
	while (str[i] != '\0')
    {
		ft_putchar(str[i]);
		i++;
	}
}
