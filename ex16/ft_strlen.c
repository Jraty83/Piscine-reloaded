//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("please add one string\n");
		return (0);
	}
	printf("length of a given string is: %d characters\n", ft_strlen(argv[1]));
	return (0);
}*/
