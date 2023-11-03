#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 *  _isupper -  function that checks for uppercase character
 *  @c: operand
 *  Return: 1 if c is uppercase
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else
return (0);
}
