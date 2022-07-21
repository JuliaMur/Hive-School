/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:18:56 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/03 19:06:22 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int x)
{
	int	i;

	i = 1;
	ft_putchar('A');
	while (i < x - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('B');
		j = j + 1;
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i = i + 1;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	last_row(int x)
{
	int	i;

	i = 1;
	ft_putchar('C');
	while (i < x - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	first_row(x);
	if (y != 1)
	{
		body(x, y);
		last_row(x);
	}
}
