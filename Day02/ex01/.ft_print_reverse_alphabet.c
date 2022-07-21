/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:08:09 by ikosheva          #+#    #+#             */
/*   Updated: 2022/06/30 12:17:06 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
