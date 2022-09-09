#include <stdio.h>
/**
* main - Prints alphabet except q and e
*
* Description: Using only the main function
* This program prints all alphabets except q and e
* Return: 0 (Successful)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
		else
			putchar(alphabet++);
	}
	putchar('\n');
	return (0);
}
