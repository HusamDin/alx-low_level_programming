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
	unsigned int cmp = 0, i = 0, len;
	char b[80];

	if (n <= 2047 && n > 1023)
	{
		b[i] = '1';
		i++;
		cmp += 1024;
		if ((cmp + 512) <= n)
		{
			cmp += 512;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 256 <= n)
		{
			cmp += 256;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 128 <= n)
		{
			cmp += 128;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 1023 && n > 511)
	{
		b[i] = '1';
		i++;
		cmp += 512;
		if ((cmp + 256) <= n)
		{
			cmp += 256;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 128 <= n)
		{
			cmp += 128;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}

	else if (n <= 255 && n > 127)
	{
		if (cmp + 128 <= n)
		{
			cmp += 128;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 64 <= n)
		{
			cmp += 64;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 127 && n > 63)
	{
		if (cmp + 64 <= n)
		{
			cmp += 64;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 32 <= n)
		{
			cmp += 32;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 63 && n > 31)
	{

		if (cmp + 32 <= n)
		{
			cmp += 32;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}

	else if (n <= 31 && n > 15)
	{
		if (cmp + 16 <= n)
		{
			cmp += 16;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 15 && n > 7)
	{
		if (cmp + 8 <= n)
		{
			cmp += 8;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 7 && n > 3)
	{
		if (cmp + 4 <= n)
		{
			cmp += 4;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 2 <= n)
		{
			cmp += 2;
			b[i] = '1';
			i++;
		}
		else
		{
			b[i] = '0';
			i++;
		}
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else if (n <= 3 && n > 1)
	{
		b[i] = '1';
		i++;
		cmp += 2;
		if (cmp + 1 <= n)
		{
			b[i] = '1';
		}
		else
		{
			b[i] = '0';
		}
	}
	else
	{
		b[i] = '0';
	}
	len = strlen(b);

	if (n > 1 || n == 0)
	{
		for (i = 0; i < len; i++)
			_putchar(b[i]);
	}
	else
		_putchar('1');
}
