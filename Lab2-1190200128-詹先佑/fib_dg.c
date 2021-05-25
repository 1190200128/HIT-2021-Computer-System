 #include <stdio.h>　　　　 //定义输入／输出函数
 #include <stdlib.h>　　　　//定义杂项函数及内存分配函数
 #include <string.h>　　　　//字符串处理
 #include <time.h>　　　　　//定义关于时间的函数
int Fibon1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibon1(n - 1) + Fibon1(n - 2);
	}
}
int main()
{
	unsigned int n = 0;
int result = 0;
	printf("请输入n:");
	scanf("%u", &n);
  result = Fibon1(n);
  printf("结果为 %d", result);
	return 0;
}
