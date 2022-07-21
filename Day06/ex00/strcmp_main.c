/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikosheva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:45:48 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/06 13:48:39 by ikosheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
int main(void)
{
	printf("strcmp(\"a\", \"a\") = %d\n", ft_strcmp("a", "a") );
    printf("strcmp(\"a\", \"b\") = %d\n", ft_strcmp("a", "b") );
    printf("strcmp(\"a\", \"c\") = %d\n", ft_strcmp("a", "c") );
    printf("strcmp(\"z\", \"d\") = %d\n", ft_strcmp("z", "d") );
    printf("strcmp(\"abc\", \"abe\") = %d\n", ft_strcmp("abc", "abe") );
    printf("strcmp(\"apples\", \"apple\") = %d\n", ft_strcmp("apples", "apple") );

    
    return(0);
}
