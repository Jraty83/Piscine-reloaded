/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 10:54:45 by jraty             #+#    #+#             */
/*   Updated: 2020/06/08 10:55:18 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	i;
	int	max;
	int	min;
	int	*n;

	min = -6;
	max = 6;
	n = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", n[i]);
		++i;
	}
	return (0);
}
