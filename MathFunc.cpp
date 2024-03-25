#include "MathFunc.h"

int Sum(int one, int two)
{
	return one + two;
}

int Subtr(int one, int two)
{
	return one - two;
}

int Mult(int one, int two)
{
	return one * two;
}

int Div(int one, int two)
{
	return one / two;
}

int pow(int one, int two)
{
	int result = one;
	for (int i = 0; i < two - 1; i++)
	{
		result *= one;
	}
	return result;
}
