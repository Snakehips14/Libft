/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: behiraux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:37:34 by behiraux          #+#    #+#             */
/*   Updated: 2018/11/19 15:52:10 by behiraux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = len;
	if (!s)
		return (NULL);
	if ((size_t)j > ft_strlen(s) || start > ft_strlen(s))
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * j + 1)))
		return (NULL);
	while (i < j && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
