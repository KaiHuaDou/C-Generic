#include "C_Generic.h"
#include <stdio.h>
int main()
{
	int value = 123;
	G(int) generic_var = Set_G(value);
	value = Get_G(generic_var);
	printf("%d", value);
	return 0;
}
