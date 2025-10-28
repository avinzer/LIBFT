#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
    {
        return malloc(1);
    }
    void *p = malloc(nmemb * size);
    if (!p)
        return NULL;
    
    
}