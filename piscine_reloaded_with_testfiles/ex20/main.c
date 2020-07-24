/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 13:43:36 by jraty             #+#    #+#             */
/*   Updated: 2020/06/04 14:18:38 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*s1;

	s1 = "duplicate this";
	printf("original string is: %s\n", s1);
	ft_strdup(s1);
	printf("duplicated string is: %s\n", ft_strdup(s1));
	return (0);
}
