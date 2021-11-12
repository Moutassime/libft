/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:45:52 by eseiv             #+#    #+#             */
/*   Updated: 2021/11/04 13:22:50 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
/*void test(unsigned int index, char *s)
{
    
    s[index] = 'H';
}
#include<stdio.h>
int main(){
    char str[200]="hello world";
    ft_striteri(str, &test);
    printf("%s", str);
}*/