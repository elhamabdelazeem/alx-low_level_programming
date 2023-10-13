#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{int i;
for (i = 1; i <= 100; i++)
{
if ((i % 15) == 0)
{
printf("FizzBuzz ");
continue;
}
else if ((i % 3) == 0)
{
printf("Fizz ");
continue;
}
else if ((i % 5) == 0)
{
printf("Buzz ");
continue;
}
else if (i == 1)
{
printf("%d", i);
}
else if
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}
