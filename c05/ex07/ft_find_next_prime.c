int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return 2;
    
    while (1)
    {
        if (ft_is_prime(nb) == 1)
            return nb;
        nb++;
    }
}

/*
int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return 2;

    while (ft_is_prime(nb) == 0)
        nb++:
    return nb;
}
*/

int main(void)
{
    printf("%d\n", ft_find_next_prime(5));
    printf("%d\n", ft_find_next_prime(9));
    return 0;
}