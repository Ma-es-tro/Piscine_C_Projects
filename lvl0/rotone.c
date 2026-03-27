#include <unistd.h>

void ft_putchr(char c)
{
	write(1, &c,1);
}

void rotone(char *s)
{
	while(*s)
	{
		if (*s >= 'A' && *s <= 'Y' || *s >= 'a' && *s <= 'y')
		{
			ft_putchr(*s + 1);
		}
		else if(*s == 'Z' || *s == 'z')
		{
			ft_putchr(*s - 25);
		}
		else
		{
			ft_putchr(*s);
		}
		++s;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	write(1, "\n",1);
	return (0);
}