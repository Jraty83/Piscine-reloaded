//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	k;
	int	m;

	k = 2;
	m = 4;
	ft_swap(&k,&m);
	printf("%d\n%d\n", k,m);
	return (0);
}*/
