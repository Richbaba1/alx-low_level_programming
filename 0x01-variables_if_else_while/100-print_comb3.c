#include <unistd.h>
/**
 * main - program that prints all possible different
 * combinations of three digits
 *
 * Return: Always 0 (Success)
 */
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int i, j;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = i + 1; j <= '9'; j++)
        {
            ft_putchar(i);
            ft_putchar(j);
            if (i != '8' || j != '9')
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
    return (0);
}
