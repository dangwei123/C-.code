#define _CRT_SECURE_NO_WARNINGS 1
/*��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
Ҫ��
����ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���*/
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