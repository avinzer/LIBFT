#include "libft.h"
#include "stdio.h"

char *ft_strrchr(char *s, int c)
{
    int i = 0;
    char *p = NULL;

    while (s[i])
    {
        i++;
    }
    while (i >= 0)
    {
        if ( (char)c == s[i])
        {
            p = (char *)&s[i];
            break;
        }
        i--;
    }
    return p;
}

int main()
{
    char a[] = "kalid khalid";
    char *p = ft_strrchr(a, 'k');
    printf("%s", p);
}