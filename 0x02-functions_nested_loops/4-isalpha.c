#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to check for
 *Return: returns 0 if not a letter and returns 1 if a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <=  'z') || (c >= 'A' && c <= 'Z'));
}
