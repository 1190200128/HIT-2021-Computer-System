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
printf("+0：%.100f\n",a);
printf("-0：%.100f\n",b);
printf("最小浮点数：%E\n",c);
printf("最大浮点数：%E\n",d);	
printf("正无穷：%f\n",e);
printf("NAN：%f\n",f);
printf("\n\n");
printf("16进制输出为:\n");
printf("+0：");
show(a);
printf("\n");
printf("-0：");
show(b);
printf("\n");
printf("最小浮点数：");
show(c);
printf("\n");
printf("最大浮点数：");	
show(d);
printf("\n");
printf("正无穷：");
show(e);
printf("\n");
printf("NAN：");
show(f);
printf("\n");
}
