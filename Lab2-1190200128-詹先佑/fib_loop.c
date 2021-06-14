#include <stdio.h>

int fibonacci(int n) 
{
    if(1 == n || 2 == n)
    {
        return 1;
    }
    
    int f1 = 1;
    int f2 = 1;
    int f3 = 0;
    int i;
    for( i = 3; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2; 
        f2 = f3;
    }
    
    return f3;
}

int main()
{   
    int m, result;
    
    printf("请输入n: ");
    scanf("%d", &n);
    
    result = fibonacci(n);
    
    printf("结果为 %d", result);
   
    return 0;
}
