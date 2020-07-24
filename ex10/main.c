/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:37:34 by jraty             #+#    #+#             */
/*   Updated: 2020/06/02 16:37:52 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int		c;
	int		d;

	c = 21;
	d = 33;
	printf("initial values are:\nc = %d\nd = %d\n", c, d);
	ft_swap(&c, &d);
	printf("after being swapped:\nc = %d\nd = %d\n", c, d);
	return (0);
}
