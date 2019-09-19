#define _CRT_SECURE_NO_WARNINGS 1
/*有一个字符数组的内容为:"student a am i",
请你将数组的内容改为"i am a student".
要求：
不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。*/
#include<stdio.h>
int My_strlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + My_strlen(str+1);
	}
}
void Reverse_(char *str, char *left, char *right)
{
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void Reverse_str(char *str)
{
	int length = My_strlen(str);
	Reverse_(str, str,str+length-1);
	char *cur = str;
	char *start = NULL;
	while (*cur != '\0')
	{
		start = cur;
		while ((*cur) != ' '&&(*cur )!= '\0')
		{
			cur++;
		}
		Reverse_(str, start, cur - 1);
		if (*cur == ' ')
		{
			cur++;
		}
	}
}
int main()
{
	char str[] = "student a am i";
	int ret = My_strlen(str);
	printf("%d\n", ret);
	Reverse_str(str);
	printf("%s\n", str);
	return 0;
}