/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 15:15:08 by jraty             #+#    #+#             */
/*   Updated: 2020/06/04 12:20:30 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (0);
	}
	ft_print_params(argc, argv);
	return (0);
}
