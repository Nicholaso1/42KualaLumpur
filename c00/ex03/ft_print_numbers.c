#include <unistd.h>

void ft_print_numbers(void)
{
    int count = '0';
    int i = 0;
    while (i < 10)
    {
        write(1,&count,1);
        count++;
        i++;
    }
}

int main(void)
{
    ft_print_numbers();
    return 0;
}
