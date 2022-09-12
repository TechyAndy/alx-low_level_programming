#include <stdio.h>

/**
 * main -Entry Point
 *
 * Return : Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
