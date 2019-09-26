#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*编写一个函数，输入是一个无符号整数，
返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
int hammingWeight(unsigned int  n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i<32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;

}
int main()
{
	int ret = hammingWeight(7);
	printf("%d\n", ret);
	return 0;
}
*/