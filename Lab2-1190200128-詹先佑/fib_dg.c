 #include <stdio.h>�������� //�������룯�������
 #include <stdlib.h>��������//������������ڴ���亯��
 #include <string.h>��������//�ַ�������
 #include <time.h>����������//�������ʱ��ĺ���
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
	printf("������n:");
	scanf("%u", &n);
  result = Fibon1(n);
  printf("���Ϊ %d", result);
	return 0;
}
