/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:50:28 by eseiv             #+#    #+#             */
/*   Updated: 2021/11/06 14:39:20 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20] = "0123456789ABCDEF";
	char	str2[20] = "0123456789ABCDEF";

	memmove(str1 + 2, str1, 5);
	ft_memmove(str2 + 2, str2, 5);
	printf("memmove:    %s\n", str1);
	printf("ft_memmove: %s\n", str2);
}*/
