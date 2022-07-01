#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
        char alpha = 'a';

        while (alpha <= 'z')
        {
          putchar(alpha);
          alpha = alpha + 1;
        }
        putchar('\n');
        return (0);
}
