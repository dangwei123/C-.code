#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*给定一个整数 n，返回 n! 结果尾数中零的数量。
int trailingZeroes(int n)
{
	if (n<5)
	{
		return 0;
	}
	else
	{
		return n / 5 + trailingZeroes(n / 5);
	}

}
int main()
{
	int ret = trailingZeroes(25);
	printf("%d\n", ret);
	return 0;
}
*/

/*实现 int sqrt(int x) 函数。计算并返回 x 的平方根，
其中 x 是非负整数.由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

int mySqrt(int x)
{
	int left = 0;
	int right = x;
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	else
	{
		while (right - left > 1)
		{
			int m = (right + left) / 2;
			if (x / m < m)
			{
				right = m;
			}
			else
			{
				left = m;
			}
		}
		return left;
	}
}
int main()
{
	int ret = mySqrt(8);
	printf("%d\n", ret);
	return 0;
}
*/

/*统计字符串中的单词个数，这里的单词指的是连续的不是空格的字符。请注意，
你可以假定字符串里不包括任何不可打印的字符。
int countSegments1(char *str)
{
	int count = 0;
	int flag = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			flag = 0;
		}
		if (*str != ' '&&flag == 0)
		{
			count++;
			flag = 1;
		}
		str++;
	}
	return count;
}
int countSegments2(char *str)
{
	int count = 1;
	char *cur = str;
	while (*cur != '\0')
	{
		if (*cur == ' '&&*(cur + 1) != ' ')
		{
			count++;
		}
		cur++;
	}
	return count;
}
int main()
{
	char str[] = "i am a student";
	int ret1 = countSegments1(str);
	int ret2 = countSegments1(str);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}
*/