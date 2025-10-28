#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    if (n == 0)
        return 0;

    size_t i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}


int main()
{
    char a[] = "ferid";
    // char *a;

    char b[] = "faled";

    printf("%d", ft_memcmp(a, b, 4));
}