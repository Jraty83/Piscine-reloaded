//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{

	int	num;

	num = 0;
	printf("enter a number: ");
	scanf("%d", &num);
	printf("square root of given number is: %d\n", ft_sqrt(num));
	return (0);
}*/
