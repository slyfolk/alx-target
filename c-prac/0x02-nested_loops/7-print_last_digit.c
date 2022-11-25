#include "main.h"

int main(void)
{
	int r;
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

int print_last_digit(int a)
{
	a = abs(a % 10);
	_putchar(a + '0');
	return (a);
}

