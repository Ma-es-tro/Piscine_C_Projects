#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int num;
	int div;

	num = *a;
	div = *b;
	*a = num / div;
	*b = num % div;
}

// int	main()
// {
// 	int a;
// 	int b;

// 	a = 42;
// 	b = 4;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Div: %d, Mod:%d\n", a, b);
// 	return 0;
// }