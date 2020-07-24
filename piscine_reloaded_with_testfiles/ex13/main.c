/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 11:56:31 by jraty             #+#    #+#             */
/*   Updated: 2020/06/03 13:25:13 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int		a;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Factorial of number %d is: %d\n", a, ft_recursive_factorial(a));
	return (0);
}
