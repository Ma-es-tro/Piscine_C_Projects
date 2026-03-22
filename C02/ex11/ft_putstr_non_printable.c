#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
    int     i;
    char    hex[2];

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            
            write(1, &str[i], 1);
        }
        else
        {
            hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
            hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
            write(1, "\\", 1);
            write(1, hex, 2);
        }
        i++;
    }
}

// int main()
// {
//     ft_print_non_printable("Hello\tWorld\n");
//     ft_print_non_printable("Hi!\x01\x02 Test\x7f End");
// }
