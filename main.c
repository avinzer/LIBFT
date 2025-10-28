
#include "unistd.h"
#include "libft.h"
#include "stdio.h"
#include "string.h"

int main()
{
    char a[] = "ferid";
    // char *a;

    char b = 'r';

    printf("%s", memchr(a, b, 4));
}