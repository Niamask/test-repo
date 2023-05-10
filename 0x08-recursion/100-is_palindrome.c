/**
* _strlen_recursion - function of recutsion
* @s: string
* Return: 0.
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
* palidrone - function of palidrone
* @s: string of the char
* @t: integer
* @i: integer
* Return: 0.
*/
int palidrone(char *s, int t, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[t - i])
			return (0);
		else
			return (palidrone(s, t, i + 1));
	}
	else
		return (1);
}
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: string of char
* Return: 0.
*/
int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}
