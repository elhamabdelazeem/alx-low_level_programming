#include "main.h"
/**is_palindrome - tells if string is palindrom or not
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{int i, length, pa;
for (i = 0; s[i] != '\0'; i++)
     ;
length = i;
pa = 1;
for (i = 0; i < (length / 2); i++)
{
if (s[i] !== s[(length - 1 - i)])
{pa = 0;
break;
}
}
return (pa);
}
