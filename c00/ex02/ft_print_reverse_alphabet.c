#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char c = 'z';
    int i = 0;
    while (i < 26)
    {
        write(1, &c, 1);
        c--;
        i++;
    }       
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}