#include <stdio.h>
#include <stdlib.h>

int main()
{
if (sizeof (int*)==8)
printf("CPU��64λ\n");
else if (sizeof (int*)==4)
printf("CPU��32λ\n");
else
{
	printf("δ֪\n");
}

return 0;
}
