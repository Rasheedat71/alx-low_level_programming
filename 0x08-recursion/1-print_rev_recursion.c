#include "main.h"
/**
<<<<<<< HEAD
* _print_rev_recursion - Prints a string in reverse.
* @s: The string to be printed.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
=======
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s) /*If statement*/
{
_print_rev_recursion(s + 1); /*add s*/
_putchar(*s); /*print s*/
>>>>>>> 1640a29dcb205ee110357e15a3a131c58e92a585
}
}
