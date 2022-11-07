#include "main.h"
#include <string.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be represented in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int cmp = 0;

	if (n <= 2047 && n > 1023)
	{
		_putchar('1');
		cmp += 1024;
		if ((cmp + 512) <= n)
		{
			cmp += 512;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		if (cmp + 256 <= n)
		{
			cmp += 256;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		if (cmp + 128 <= n)
		{
			cmp += 128;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 1023 && n > 511)
	{
		_putchar('1');
		 
		cmp += 512;
		if ((cmp + 256) <= n)
		{
			cmp += 256;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 128 <= n)
		{
			cmp += 128;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	else if (n <= 255 && n > 127)
	{
		if (cmp + 128 <= n)
		{
			cmp += 128;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 127 && n > 63)
	{
		if (cmp + 64 <= n)
		{
			cmp += 64;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 63 && n > 31)
	{

		if (cmp + 32 <= n)
		{
			cmp += 32;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	else if (n <= 31 && n > 15)
	{
		if (cmp + 16 <= n)
		{
			cmp += 16;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 15 && n > 7)
	{
		if (cmp + 8 <= n)
		{
			cmp += 8;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 7 && n > 3)
	{
		if (cmp + 4 <= n)
		{
			cmp += 4;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			_putchar('1');
			 
		}
		else
		{
			_putchar('0');
			 
		}
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n <= 3 && n > 1)
	{
		_putchar('1');
		cmp += 2;
		if (cmp + 1 <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	else if (n == 1)
	{
		_putchar('1');
	}

	else
		_putchar('0');
}
