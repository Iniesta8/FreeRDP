#include <winpr/spec.h>

DECLSPEC_EXPORT int FunctionA(int a, int b);
DECLSPEC_EXPORT int FunctionB(int a, int b);

int FunctionA(int a, int b)
{
	return (a * b); /* multiply */
}

int FunctionB(int a, int b)
{
	return (a / b); /* divide */
}
