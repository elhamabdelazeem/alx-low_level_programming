#include "main.h"
#include<unistd.h>
#include<ctype.h>
/**
 * _islower - checks for lowercase character
 * Return: always 1 (success)
 */
int _islower(int c)
{int n;
if (n >= 97)
return (1);
else if (n <= 122)
return (1);
else if (n < 97)
return (0);
else if (n > 122)
return (0); }
