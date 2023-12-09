int ft_str_is_numbers(char *str)
{
        int r = 0;
    if (str[r] == '\0')
    {
        return -1;
    }
    int i = 0, t = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            t++;
        }
        
        i++;
    }
    if (i == t)
    {
        return 1;
    }
    return 0;
}
