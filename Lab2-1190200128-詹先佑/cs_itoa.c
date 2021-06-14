#include <stdio.h>
#include <stdlib.h>
int main()
{
int num,i,num1,a;
int len=1;
char string[100];
printf("请输入一个正数：");
scanf("%d",&num);
num1=num;
while(num>0)
{
	num = num/10;
	len++;
}
for(i=len-2;i>=0;i--)
{
	a=num1%10;
	string[i]=a+48;
	num1=num1/10;
}
printf("正数转换后的字符串为：%s",string);
}
 
