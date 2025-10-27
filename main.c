
#include "unistd.h"
#include "libft.h"
#include "stdio.h"
#include "string.h"

int main()
{
    char a[] = "ferid";
    // char *a;

    char b[] = "khadid";

    printf("%s", memcpy(a, b, 5));
}