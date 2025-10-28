

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}


int atoi(const char *nptr)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while (ft_isspace(nptr[i]))
    {
        i++;
    }
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result += result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}