/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:44:13 by eseiv             #+#    #+#             */
/*   Updated: 2021/11/11 16:57:51 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	long long	start;
	long long	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (in_set(s1[start], set))
		start++;
	while (in_set(s1[end], set) && end >= 0)
		end--;
	if (end < 0)
		return (ft_strdup(""));
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 2);
	return (str);
}
/*#include<stdio.h>
int main(){
char str[]="hello?";
char *set="?";
printf("%s",ft_strtrim(str,set));
}*/
