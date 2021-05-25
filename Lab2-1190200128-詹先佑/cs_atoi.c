#include <stdlib.h>
#include <string.h>
int transform( char string[])
{
    int value=0;
    int i=0;
    while( string[i] >= '0' && string[i] <= '9' ){
        value *= 10;
        value += string[i] - '0';
        i++;
    }
   
    return value;
}

int main()
{
    char string[100] ;
    int len;
    printf("请输入字符串:");
    scanf("%s",string);
    printf("转换成的正数为：%d\n", transform(string));

    return 0;
}

