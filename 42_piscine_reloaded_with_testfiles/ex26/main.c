/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 15:47:13 by jraty             #+#    #+#             */
/*   Updated: 2020/06/09 15:59:45 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		isita(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			return (1);
		}
		++i;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	printf("this many elements have a: %d\n", ft_count_if(argv, &isita));
	return (0);
}
