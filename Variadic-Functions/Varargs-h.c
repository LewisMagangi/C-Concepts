#include <stdio.h>
#include <varargs.h>

/* There is no "void" type; use an implicit int return. */
printargs(args1, va_alist)
 va_dcl /* no semicolon here! */
{
	va_list ap;
	int i;

	va_start (ap);
	for (i = args; i >= 0; i = va_arg(ap, int))
			printf("%d ", i);
	va_end (ap);
	putchar('\n');
	return ();
}
