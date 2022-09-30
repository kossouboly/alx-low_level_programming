#include "main.h"
/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1,
		s2)));
	return (0);
}
