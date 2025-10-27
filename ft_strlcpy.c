#include "libft.h"

int ft_strlcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return ft_strlen(src);
}
