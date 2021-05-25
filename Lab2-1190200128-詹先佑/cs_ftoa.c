#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int pows(int x)
{
	int y = 1;
	for (; x != 0; x--)
		y = y * 10;
	return y;
}

void display_result(double result)
{
    if(result<0)
    {
        printf("-");
        display_result(-result);
    }
    if(result>0)
    {
        double i;
        int x;
        int y;
        i=1;
        for(x=0;i>=1;x++)
          {
			 i=result/pows(x+1);
		}
		 printf("得到的字符串为："); 
        for(;x!=0;x--)
        {
            y=((int)(result/pows(x-1)))%10;
            printf("%d",y);
        }
        printf(".");
        i=result-(int)result;
        for(x=0;x<6;x++)
        {
            y=((int)(i*pows(x+1)))%10;
            printf("%d",y);
        }
    }
}


int main()
{
	float num;
	printf("请输入一个浮点数：");
    scanf("%f", &num);
    display_result(num);
	return 0;
}
