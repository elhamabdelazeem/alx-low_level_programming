#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 * _islower - checks for lowercase character
 * Return: always 1 (success)
 */
int _islower(int c)
{int c;
if (c >= 97)
return (1);
else if (c <= 122)
return (1); }
