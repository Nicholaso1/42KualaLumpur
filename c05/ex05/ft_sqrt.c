int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i <= nb / 2)
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}

int main(void)
{
    printf("%d\n", ft_sqrt(3));
    return 0;
}