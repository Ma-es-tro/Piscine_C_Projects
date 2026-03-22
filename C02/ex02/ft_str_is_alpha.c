#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}

// int	main()
// {
// 	int i;
// 	int o;
// 	int k;

// 	i = ft_str_is_alpha("asdea0$5#");
// 	o = ft_str_is_alpha("asdeaQswQ");
// 	k = ft_str_is_alpha("");

// 	printf("%d\n",i);
// 	printf("%d\n",o);
// 	printf("%d\n",k);
// }