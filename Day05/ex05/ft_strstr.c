/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:16:27 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/05 21:28:49 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int tmpr;

	i = 0;
	tmpr = 0;

	if (*to_find == '\0')
		return(str);
	while (*str != '\0')
	{
		if( *str == *to_find)
		{
			while( to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmpr = 1;
				i++;
			}
			if (tmpr == 0)
				return(str);
		}
		str++;
	}
	return (0);
}
