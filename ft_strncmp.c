#include "libft.h"

#include <stddef.h> // for size_t

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    if (n == 0)
        return 0;

    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return 0;
}


#include "unistd.h"
#include "libft.h"
#include "stdio.h"
#include "string.h"

int main()
{
    char a[] = "khba";

    char b[] = "khbbf";

    int c  = ft_strncmp(a, b, 15);

    printf("%d", c);
    
}