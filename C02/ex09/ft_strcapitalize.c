#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i     = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if (count == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            count++;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }

        if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '+' || str[i] == '-')
            count = 0;

        i++;
    }
    return str;
}

// int	main()
// {
// 	char str[] = "helLo worLd!";
// 	char *prt = ft_strcapitalize(str);
	
// 	printf("UpCase: %s\n", prt);
// }