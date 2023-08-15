#include <stdio.h>

/**
 * print_number - Prints a two-digit number with leading zero if needed.
 * @num: The number to be printed.
 */
void print_number(int num)
{
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
}

/**
 * main - Entry point of the program.
 *
 * This program prints all possible combinations of two two-digit numbers.
 * The numbers range from 0 to 99, and are separated by a space. Each number
 * is printed with two digits, and the combinations are separated by comma
 * followed by a space. Combinations are printed in ascending order.
 * Example: "00 01, 00 02, ..., 98 99".
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	for (int num1 = 0; num1 < 100; num1++)
	{
	for (int num2 = num1; num2 < 100; num2++)
		{
		if (num1 != num2)
		{
		print_number(num1);
		putchar(' ');
		print_number(num2);
		if (num1 != 98 || num2 != 99)
		{
		putchar(',');
		putchar(' ');
				}
			}
		}
	}
	return (0);
}
