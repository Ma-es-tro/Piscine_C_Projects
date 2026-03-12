#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

// int	main()
// {
// 	ft_putstr("Hello,World\n");
// 	return 0;
// }