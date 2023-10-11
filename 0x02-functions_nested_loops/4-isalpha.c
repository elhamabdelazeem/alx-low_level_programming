#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 * _isalpha -  checks for alphabetic character
 * @c: operand
 * Return: always 1 (success)
 */
int _isalpha(int c)
{
if (((c >= 97) && (c <=122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
return (0); }
