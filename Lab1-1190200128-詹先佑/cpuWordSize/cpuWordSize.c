#include <stdio.h>
#include <stdlib.h>

int main()
{
if (sizeof (int*)==8)
printf("CPU是64位\n");
else if (sizeof (int*)==4)
printf("CPU是32位\n");
else
{
	printf("未知\n");
}

return 0;
}
