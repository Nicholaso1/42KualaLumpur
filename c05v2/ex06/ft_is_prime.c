int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return 0;
    else if (nb == 2 || nb == 3)
        return 1;
    else
    {
        while (i * i <= nb)
        {
            if  (nb % i == 0)
                return 0;
            i++;
        }
    }
    return 1;
}

int main(void)
{
    printf("%d\n", ft_is_prime(5));
}


/*

Improvement:
Start i at 3 and increment by 2: Since even numbers (except 2) are not prime, you could start at 3 and increment by 2 to skip even numbers, reducing unnecessary checks.


*/