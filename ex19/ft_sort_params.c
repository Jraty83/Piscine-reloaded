#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
	ft_putchar('\n');
	i++;
	}
}

int	ft_sort_params(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_sort_params(argv[i], argv[j]) < 0)
			{	
				char *temp;

				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		j++;
		}
	i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
