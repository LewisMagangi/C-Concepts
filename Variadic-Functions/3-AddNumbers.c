#include <stdio.h>
#include <stdarg.h>
int AddNumbers(int n, ...)
{
	int Sum = 0;
	int i = 0;

	va_list (ptr);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		Sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (Sum);
}
int main()
{
	 printf("\n\n Variadic functions: \n");
	 printf("\n 1 + 2 = %d ",
		AddNumbers(2, 1, 2));
	 printf("\n 3 + 4 + 5 = %d ", 
	 	AddNumbers(3, 3, 4, 5));
	 printf("\n 6 + 7 + 8 + 9 = %d ",
		AddNumbers(4, 6, 7, 8, 9));
	 printf("\n");
	 return (0);
}
