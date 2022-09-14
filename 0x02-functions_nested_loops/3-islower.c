/**
 * _islower - Checks for lowercase characters
 * @c: the character to be checked
 *
 * Return: If successful 1, otherwise 0
 */

int _islower(int c)
{
	int capA = 'A';
	int ret = 0;

	while (capA <= 'Z')
	{
		if (capA == c)
		{
			ret = 0;
			return (ret);
		}
		else
		{
			if (capA == 'Z')
			{
				ret = 1;
				return (ret);
			}
			else
				capA++;
		}
	}
	return (ret);
}
