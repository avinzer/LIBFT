#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
    unsigned char *s;

    if (!dest || !src)
    {
        return NULL;
    }
    d = (unsigned char *) dest;
    s = (unsigned char *) src;
    i = 0;
    while (i < n && s[i])
    {
        d[i] = s[i];
        i++;
    }
    // return dest;
}

int main()
{
	char a[] = "ferid";
	char b[] = "khadid";

	printf("%s\n", (char *)ft_memcpy(a, b, 5));
	return 0;
}