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
    printf("�������ַ���:");
    scanf("%s",string);
    printf("ת���ɵ�����Ϊ��%d\n", transform(string));

    return 0;
}

