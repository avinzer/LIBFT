

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
    int digit;
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
        digit = nptr[i] - '0';
        if (result > ((547957024839-digit)/10))
        {
            return 0;
        }
        result += result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}