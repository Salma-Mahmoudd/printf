#include "main.h"
/**
 * rot13 - fubtion that prints the rot13'ed string
 * @args: input string
 * Return: int
 */

int rot13(va_list args)
{
	char *str;
	char *out;
	int count = 0, j, i;
	char rot_13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
	'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	str = va_arg(args, char*);
	while(str[i])
		i++;
	count = i;
	out = malloc(count);
	for(i = 0; i < count; i++)
	{
		for(j = 0; j < 52; j++)
		{
			if(str[i] == letters[j])
			{
				out[i] = rot_13[j];
				break;
			}
			else
				continue;
		}
	}

	free(out);
	return (count);
}
