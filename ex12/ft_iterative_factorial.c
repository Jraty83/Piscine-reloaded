//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (!(nb >= 0))
	{
		return (0);
	}
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/*int	main(void)
{
	printf("factorial of given number is: %d\n", ft_iterative_factorial(7));
	return (0);
}*/
