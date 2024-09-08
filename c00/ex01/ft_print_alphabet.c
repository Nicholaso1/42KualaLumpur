#include <unistd.h>

void    ft_print_alphabet(void)
{
    char c = 'a';
    int i = 0;
    
    while (i < 26)
    {
        write(1, &c, 1);
        c++;
        i++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return  0;
}