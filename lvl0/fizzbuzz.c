#include <unistd.h>

void ft_prtnm(int num)
{
	if (num >= 10)
		ft_prtnm(num / 10);
	num = (num % 10) + '0';
	write(1, &num,1);
}

int main()
{
	int dig;

	dig = 1;
	while(dig <= 100)
	{
		if (dig % 3 == 0)
			write(1, "fizz",4);
		else if (dig % 5 == 0)
			write(1, "buzz",4);
		else if (dig % 3 && 5 == 0)
			write(1, "fizzbuzz",8);
		else
			ft_prtnm(dig);
		write(1, "\n", 1);
		dig++;
	}
	
	return (0);
}