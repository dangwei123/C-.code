#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不使用运算符 + 和 - ​​​​​​​，计算两整数 ​​​​​​​a 、b ​​​​​​​之和。
int getSum(int a, int b)
{
	int c = 0;
	while (b)
	{
		c = ((unsigned int)a&b) << 1;
		a = a^b;
		b = c;
	}
	return a;
}
int main()
{
	int ret=getSum(-3,7);
	printf("%d\n", ret);
	return 0;
}