#include "main.h"

/**
*  _pow_recursion - Function that returns a value raised to another.
*  @x: Base.
*  @y: Exponent.
*  Return: Valued mutiplied.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
