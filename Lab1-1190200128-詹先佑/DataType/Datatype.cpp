#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int number1=1190200128;
	int *b=&number1;
	float number2=0.15678;
	double number3=431229200108100013;
	char name[15]="zhanxianyou"; //string
    enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } day;
    day=Mon;
    struct person
    {
    	int age;
    	int height;
    	int weight;
	};
	struct person information;
	information.age=19;
	information.height=176;
	information.weight=140;
	union data{
    int n;
    } test;
    test.n=1;
	printf("int���͵�number��������%d,��ַ��%d,16���Ƶ�ַ��%x\n",number1,&number1,&number1);
	printf("pointer���͵�b��������%d,��ַ��%d,16���Ƶ�ַ��%x\n",b,&b,&b);
	printf("float���͵�number2��������%f,��ַ��%d,16���Ƶ�ַ��%x\n",number2,&number2,&number2);
	printf("double���͵�number3��������%lf,��ַ��%d,16���Ƶ�ַ��%x\n",number3,&number3,&number3);
    printf("string���͵�name��������%s,��ַ��%d,16���Ƶ�ַ��%x\n",name,&name,&name);
	printf("char���͵�name[0]��������%c,��ַ��%d,16���Ƶ�ַ��%x\n",name[0],&name[0],&name[0]);
	printf("enum���͵�Mon��������%d,��ַ��%d,16���Ƶ�ַ��%x\n",day,&day,&day);
	printf("struct���͵�information��������%d %d %d,��ַ��%d,16���Ƶ�ַ��%d\n",information.age,information.height,information.weight,&information,&information);
	printf("union���͵�test��������%d,��ַ��%d,16���Ƶ�ַ��%x\n",test,&test,&test);
	printf("main�ĵ�ַ��%d\n",&main);
    printf("printf�ĵ�ַ��%d\n",&printf);
	return 0;
	
 } 
