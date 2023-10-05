#include<stdio.h>
/**
 * main - printing size of different data types
 * Return: Always 0 (Success)
 */
int main(void)
{char x;
int y;
long int z;
long long int o;
float w;

printf("Size of a char: %ld byte(s)\n", sizeof(x));
printf("Size of an int: %ld byte(s)\n", sizeof(y));
printf("Size of a long int: %ld byte(s)\n", sizeof(z));
printf("Size of a long long int: %ld byte(s)\n", sizeof(o));
printf("Size of a float: %ld byte(s)\n", sizeof(w));
return (0); }
