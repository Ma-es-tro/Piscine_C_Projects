#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

// int main()
// {
//     char dest[20];

//     ft_strncpy(dest, "Hello, World", 3);
//     printf("Copied: %s\n", dest);  // Hel
// }