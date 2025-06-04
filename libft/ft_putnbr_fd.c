#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    if (nb > 9)
    {
        ft_putchar_fd(n / 10, fd);
    }
    ft_putchar_fd(n % 10 + '0', fd);
}

#include <stdio.h>

int main(void)
{
    ft_putnbr_fd(42);

    return 0;
}
