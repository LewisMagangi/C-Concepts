#include <stdio.h>
#include <stdarg.h>
int LargestNumber(int n, ...)
{
	int i, min = 0;

	va_list (ptr);
	va_start (ptr, n);
	for (i = 0; i < n; i++)
	{
		int temp = va_arg(ptr, int);
		min = temp > min ? temp : min;
	}
	va_end (ptr);

	return (min);
}
int main()
{
	printf("\n\n Variadic functions: \n");
	printf("\n %d ",
	 	LargestNumber(2, 1, 2));
	printf("\n %d ",
	 	LargestNumber(3, 3, 4, 5));
	printf("\n %d ",
	 	LargestNumber(4, 6, 7, 8, 9));
	printf("\n");
	return (0);
}
