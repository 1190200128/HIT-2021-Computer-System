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
	printf("int类型的number的内容是%d,地址是%d,16进制地址是%x\n",number1,&number1,&number1);
	printf("pointer类型的b的内容是%d,地址是%d,16进制地址是%x\n",b,&b,&b);
	printf("float类型的number2的内容是%f,地址是%d,16进制地址是%x\n",number2,&number2,&number2);
	printf("double类型的number3的内容是%lf,地址是%d,16进制地址是%x\n",number3,&number3,&number3);
    printf("string类型的name的内容是%s,地址是%d,16进制地址是%x\n",name,&name,&name);
	printf("char类型的name[0]的内容是%c,地址是%d,16进制地址是%x\n",name[0],&name[0],&name[0]);
	printf("enum类型的Mon的内容是%d,地址是%d,16进制地址是%x\n",day,&day,&day);
	printf("struct类型的information的内容是%d %d %d,地址是%d,16进制地址是%d\n",information.age,information.height,information.weight,&information,&information);
	printf("union类型的test的内容是%d,地址是%d,16进制地址是%x\n",test,&test,&test);
	printf("main的地址是%d\n",&main);
    printf("printf的地址是%d\n",&printf);
	return 0;
	
 } 
