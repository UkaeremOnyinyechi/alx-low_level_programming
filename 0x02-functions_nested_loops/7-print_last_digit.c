#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number in the question
 *
 * Return: the value of the last digit
 */
int print_last_digit(int c)

{

		int i;



			i = c % 10;



				if (i < 0)

							i *= -1;

					_putchar(i + '0');



						return (i);

}
