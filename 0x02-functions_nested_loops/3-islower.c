#include "main.h"
/**
* _islower - A function that checks for lowercase characters
* @c : is a variable
* Return: 0 Success
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
