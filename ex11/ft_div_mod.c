//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	d;
	int	m;

	d = 0;
	m = 0;
	ft_div_mod(32, 5, &d, &m);
	printf("for given numbers:\ndiv is %d and\nmod is %d\n", d,m);
	return (0);
}*/
