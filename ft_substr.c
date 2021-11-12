/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:54:04 by eseiv             #+#    #+#             */
/*   Updated: 2021/11/10 13:34:01 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*memalloc(char *str, size_t len)
{
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	if (len == 0)
		str[0] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			j;

	j = 0;
	i = -1;
	if (!s)
		return (0);
	str = NULL;
	if (start > (unsigned int)ft_strlen(s))
		return (memalloc(str, 0));
	if (len > ft_strlen(s) - start)
		str = memalloc(str, ft_strlen(s) - start);
	else
		str = memalloc(str, len);
	if (str)
	{
		while (s[++i])
			if (i >= start && j < len)
				str [j++] = s[i];
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
