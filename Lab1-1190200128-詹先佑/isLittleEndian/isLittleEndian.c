
#include <stdio.h>
#include <stdlib.h>
int isLittleEndian ()
{
	union
	{
	  int a;
	  char b;
	}link;
	link.a = 1;
	return link.b;
}
int main()
{
	int ret = isLittleEndian();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}

