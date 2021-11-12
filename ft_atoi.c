/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:18:16 by eseiv             #+#    #+#             */
/*   Updated: 2021/11/03 12:06:56 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 0;
	nb = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (str[i] - 48) + (10 * nb);
		i++;
	}
	if (neg == 1)
		nb = nb * -1;
	return (nb);
}
/*#include<stdio.h>
int main(){

char str[]="6786684abcd";
printf("%d",ft_atoi(str));
}*/
