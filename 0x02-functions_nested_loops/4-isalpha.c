#include "main.h"
 
/**
* _islower -a function that checks for alphabetic character.
* @c : checked parameter
* Return: 0 Success
*/
int _isalpha(int c) 
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
