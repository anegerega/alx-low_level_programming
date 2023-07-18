#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char letter;
int repetitions = 10;

while (repetitions > 0)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
repetitions--;
}
_putchar('\n');
}
