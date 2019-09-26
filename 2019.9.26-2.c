#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*泰波那契序列 Tn 定义如下： 

T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn+3 = Tn + Tn+1 + Tn+2

给你整数 n，请返回第 n 个泰波那契数 Tn 的值。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-th-tribonacci-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
int tribonacci(int n)
{
	int t0 = 0;
	int t1 = 1;
	int t2 = 1;
	int t3 = 0;
	int i = 0;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			t3 = t0 + t1 + t2;
			t0 = t1;
			t1 = t2;
			t2 = t3;
		}
		return t3;
	}

}
int main()
{
	int ret = tribonacci(4);
	printf("%d\n", ret);
	return 0;
}