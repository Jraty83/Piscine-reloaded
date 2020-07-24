/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:16:45 by jraty             #+#    #+#             */
/*   Updated: 2020/06/09 11:17:49 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	printti(int arr)
{
	printf("%d\n", arr);
}

int		main(void)
{
	int tab[]={20,30,40,50,60};

	ft_foreach(tab, 5, &printti);
	return (0);
}
