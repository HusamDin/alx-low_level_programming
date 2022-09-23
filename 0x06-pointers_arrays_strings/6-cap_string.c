/**
 * cap_string - Capitalize all words of a string
 * @s: The string to be capitalized
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			switch (s[i - 1])
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\t':
			case '\n':
				s[i] = s[i] - 32;
				i++;
				break;
			default:
				i++;
			}
		}
		else
			i++;
	}
	return (s);
}
