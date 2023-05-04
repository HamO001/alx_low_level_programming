#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is a non-binary character
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}

	return (result);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	const char *binary = "11010";
	unsigned int result = binary_to_uint(binary);

	printf("Binary: %s\nDecimal: %u\n", binary, result);

	return (0);
}
