 #include <stdio.h>�������� //�������룯�������
 #include <stdlib.h>��������//������������ڴ���亯��
 #include <string.h>��������//�ַ�������
 #include <time.h>����������//�������ʱ��ĺ���
int zhengshu(char string[])
{

    int value1=0;
    int i=0;
    while( string[i] >= '0' && string[i] <= '9'  &&  string[i]!='.' ){
        value1 *= 10;
        value1 += string[i] - '0';
        i++;
    }
 
  
   
    return value1;		
}
int xiaoshu(char string[],int len)
{
	float value2=0;
	int a = 0,i=0;
for( a=0;a<len && string[a]!='.';a++)
{
	i=a+1;
}
	 while( string[i] >= '0' && string[i] <= '9'  &&  string[i]!='\n' ){
        value2 *= 10;
        value2 += string[i] - '0';
        i++;
    }
    return value2;

		
}

int main(){
	char string[100];
	int num1,len;
	int num2=0;
printf("������һ���������ַ���");
scanf("%s",string);	
len = strlen(string);
num1=zhengshu(string);
num2=xiaoshu(string,len);
printf("ת����ĸ�����Ϊ��%d.%.6d",num1,num2);
return 0;	
	
}
