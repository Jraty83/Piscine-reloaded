/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 10:25:34 by jraty             #+#    #+#             */
/*   Updated: 2020/06/03 13:23:50 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int		a;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Factorial of number %d is: %d\n", a, ft_iterative_factorial(a));
	return (0);
}
