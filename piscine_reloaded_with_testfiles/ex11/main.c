/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:39:47 by jraty             #+#    #+#             */
/*   Updated: 2020/06/02 16:40:07 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		c;
	int		d;

	c = 0;
	d = 0;
	ft_div_mod(11, 2, &c, &d);
	printf("for given numbers: \ndiv = %d\nmod = %d\n", c, d);
	return (0);
}
