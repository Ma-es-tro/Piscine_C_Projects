#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int  dst_len;
    int  src_len;
    int  i;

    dst_len = 0;
    src_len = 0;
	i = 0;

    while (dst_len < size && dest[dst_len] != '\0')
        dst_len++;

    while (src[src_len] != '\0')
        src_len++;

    if (dst_len == size)
        return (size + src_len);

    while (src[i] != '\0' && dst_len + i + 1 < size)
    {
        dest[dst_len + i] = src[i];
        i++;
    }
    dest[dst_len + i] = '\0';

    return (dst_len + src_len);
}

int main(void)
{
    char    dst1[10] = "hello";
    char    dst2[10] = "hello";
    char    dst3[4] = "hi";
	int	ret = ft_strlcat(dst1, " world!", 10);
	int	ret1 = ft_strlcat(dst2, "!!", 10);
	int	ret2 = ft_strlcat(dst3, "xyz", 2);

    printf("ret: %d | dst: \"%s\"\n", ret, dst1);
    printf("ret: %d | dst: \"%s\"\n", ret1, dst2); 
    printf("ret: %d | dst: \"%s\"\n", ret2, dst3);

    return 0;
}