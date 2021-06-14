#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int utf8len(char* a);
int main()
{
	int words = 0;
	char str1[1000], *str2;
	printf("输入一个字符串：");
	scanf("%s",str1);
	str2 = str1;
	words = utf8len(str2);
	printf("字符串个数为：%d", words);
	return 0;
}
int utf8len(char* a)
{
	int byteNum = 0;
	int words = 0;
	int i;
	for (i = 0; a[i] != '\0'; i += byteNum) {
		unsigned char ch = a[i];
	if (ch >= 0xFC && ch < 0xFE)
        byteNum = 6;
    else if (ch >= 0xF8)
        byteNum = 5;
    else if (ch >= 0xF0)
        byteNum = 4;
    else if (ch >= 0xE0)
        byteNum = 3;
    else if (ch >= 0xC0)
        byteNum = 2;
    else if (0 == (ch & 0x80))
        byteNum = 1;
		words++;
	}
	return words;
}

