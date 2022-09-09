#include <stdio.h>

int main()
{
	char lowerCase = 'a', upperCase='A';
	while(lowerCase <= 'z' && upperCase <= 'Z')
	{
		putchar(lowerCase++);
		putchar(upperCase++);
		putchar('\n');
	}
}
