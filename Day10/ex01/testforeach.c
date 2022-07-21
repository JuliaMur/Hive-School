/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testforeach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:53:58 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/11 19:55:39 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == - 2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void   ft_foreach(int *tab, int length, void (*f)(int))
{
      int i;
 
      i = 0;
      while (i < length)
      {
          f(tab[i]);
          i++;
      }
}
  
  int main(void)
{
      int tab[5] = {12, 14, 15, 16, 34};
      
	  void (*f) (int);
      
	  f = &ft_putnbr;
      
	  ft_foreach(tab, 5, f);
	  return(0);
}
