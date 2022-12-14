/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * constant byte b
 * @s: The filled string
 * @b: The filling char
 * @n: The number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
