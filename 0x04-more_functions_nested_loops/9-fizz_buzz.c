#include "main.h"
#include <stdio.h>

/**
* main -Fizz for multiplies of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
int x = 1;

while (x < 101)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (x % 3 == 0)
{
printf("%s", "Fizz");
}
else if (x % 5 == 0)
{
printf("%s","Buzz");
}
else
{
printf("5d", x);
}

if (x !=100)
{
printf(" ");
}
x++;
}
printf("\n");
return (0);
}
