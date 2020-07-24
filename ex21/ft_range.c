/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 15:10:31 by jraty             #+#    #+#             */
/*   Updated: 2020/06/08 10:10:21 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	if (!(arr = (int*)malloc(sizeof(*arr) * (max - min))))
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		++i;
		++min;
	}
	return (arr);
}
