#ifndef LIB_FT_H
#define LIB_FT_H

#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "string.h"

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_strlen(char *str);
int ft_strlcpy(char *dest, char *src);
int ft_isprint(int c);

#endif