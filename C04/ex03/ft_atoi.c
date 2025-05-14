int skip(char *str, int *p_i)
{
    int i;
    int sign;

    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    *p_i = i;
    return sign;
}

int	ft_atoi(char *str)
{
    int i;
    int sign;
    int num;

    num = 0;
    sign = skip(str,&i);
    while (str[i] <= '9' && str[i] >= '0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num * sign;
}
