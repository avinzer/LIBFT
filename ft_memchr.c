#include "libft.h"
#include "stdlib.h"
#include "stdio.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    const unsigned char *str = (const unsigned char *)s;

    if (!s)
    {
        return NULL;
    }
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
        {
            return (void *)&str[i];
        }
        i++;
    }
    return NULL;
    
}

int main()
{
    char a[] = "ferid";
    // char *a;

    char b = 'r';

    printf("%s", memchr(a, b, 4));
}