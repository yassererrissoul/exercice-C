int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))))
        {
            return 0;
        }
        i++;
    }
    i = 0;
if (str[i] == '\0')
{
    return -1;
}   
return 1;
}
