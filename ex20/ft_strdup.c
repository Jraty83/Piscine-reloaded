/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 13:09:50 by jraty             #+#    #+#             */
/*   Updated: 2020/06/04 14:18:41 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*s2;

	len = ft_strlen(src);
	if (!(s2 = malloc(sizeof(char) * (len + 1))))
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		s2[i] = src[i];
		++i;
	}
	s2[i] = '\0';
	return (s2);
}
