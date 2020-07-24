/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 13:22:03 by jraty             #+#    #+#             */
/*   Updated: 2020/06/03 13:23:26 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int		a;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Square root of number %d is: %d\n", a, ft_sqrt(a));
	return (0);
}
