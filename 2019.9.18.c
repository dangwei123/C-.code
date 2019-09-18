#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		count++;
		value &= (value - 1);
	}
	return count;
}
int main()
{
int ret = count_one_bits(15);
printf("%d\n", ret);
return 0;
}*/


/*获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。
void Fun1(int value)
{
	int i = 0;
	printf("偶数位：");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
	printf("奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
}
int main()
{
	Fun1(7);
	return 0;
}*/


/* 输出一个整数的每一位。
void Print(int value)
{
	if (value > 9)
	{
		 Print(value/10);
	}
	printf("%d ", value % 10);
}
int main()
{
	Print(1234);
	return 0;
}*/

/*编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7
int Fun2(int a, int b)
{
	int count = 0;
	int i = a^b;
	int j = 0;
	for (j = 0; j < 32; j++)
	{
		if ((i >> j) & 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int ret=Fun2(1999,2299);
	printf("%d\n", ret);
	return 0;
}*/

/*编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		sum += ((value >> i) & 1)*(int)pow((double)2, (double)(31 - i));
	}
	return sum;
}
int main()
{
	unsigned int ret = reverse_bit(25);
	printf("%u\n", ret);
	return 0;
}*/

/*不使用（a+b）/2这种方式，求两个数的平均值。
int Average(int a, int b)
{
	return ((a&b) + ((a^b)>>1));
}
int main()
{
	int ret = Average(13,27);
	printf("%d\n", ret);
	return 0;
}*/

/*编程实现：
一组数据中只有一个数字出现了一次。
其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
int Find_Once(int arr[], int length)
{
	int i = 0;
	int tmp = arr[0];
	for (i = 1; i < length; i++)
	{
		tmp ^= arr[i];
	}
	return tmp;
}
int main()
{
	int arr[] = { 3, 5, 7, 9, 34,27,5,34, 9, 3, 7 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = Find_Once(arr, length);
	printf("%d\n", ret);
	return 0;
}*/



