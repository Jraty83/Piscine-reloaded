/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:31:21 by jraty             #+#    #+#             */
/*   Updated: 2020/06/02 16:34:54 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		nro;

	nro = 6;
	printf("initial number is: %d\n", nro);
	ft_ft(&nro);
	printf("number after change is: %d\n", nro);
	return (0);
}
