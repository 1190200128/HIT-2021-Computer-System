#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
void show(float num)
{
	int len=4,i;
	char *a=&num;
	for(i=0;i<len;i++)
	{
		printf("%x",a[i]);
	}
	
}
int main()
{
float a = +0;
float b = -0;
float c = FLT_MIN;
float d = FLT_MAX;
float e = INFINITY;
float f = NAN;
printf("+0��%.100f\n",a);
printf("-0��%.100f\n",b);
printf("��С��������%E\n",c);
printf("��󸡵�����%E\n",d);	
printf("�����%f\n",e);
printf("NAN��%f\n",f);
printf("\n\n");
printf("16�������Ϊ:\n");
printf("+0��");
show(a);
printf("\n");
printf("-0��");
show(b);
printf("\n");
printf("��С��������");
show(c);
printf("\n");
printf("��󸡵�����");	
show(d);
printf("\n");
printf("�����");
show(e);
printf("\n");
printf("NAN��");
show(f);
printf("\n");
}
