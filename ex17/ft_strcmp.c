//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("result of string comparison is: %d letter(s)\n", ft_strcmp("PORK","PORT"));
	return (0);
}*/
