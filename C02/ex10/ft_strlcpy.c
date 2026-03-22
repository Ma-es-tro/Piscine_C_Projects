#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;

    while (src[src_len] != '\0')
        src_len++;

    if (size == 0)
        return src_len;

    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return src_len;
}

// int main()
// {
//     char src[] = "Hello, World!";
//     char dest[8];

//     unsigned int ret = ft_strlcpy(dest, src, sizeof(dest));

//     printf("dest: %s\n", dest);    
//     printf("ret: %u\n", ret);      
// }