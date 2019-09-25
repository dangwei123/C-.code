#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*自除数 是指可以被它包含的每一位数除尽的数。例如，128 是一个自除数，
因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。还有，自除数不允许包
含 0 。给定上边界和下边界数字，输出一个列表，
列表的元素是边界（含边界）内所有的自除数。


void selfDividingNumbers(int left, int right)
{
	int tmp = 0;
	int cur = 0;
	for (left; left <= right; left++)
	{
		cur = left;
		while (cur)
		{
			tmp = cur % 10;
			if (left % 10 == 0 || left%tmp != 0)
			{
				break;
			}
			cur = cur / 10;
			if (cur == 0)
			{
				printf("%d ", left);
			}
		}
	}
}
int main()
{
	selfDividingNumbers(1, 22);
	return 0;
}
*/

/*在大小为 2N 的数组 A 中有 N+1 个不同的元素，其中有一个元素重复了 N 次。
返回重复了 N 次的那个元素。
int repeatedNTimes(int* A, int ASize)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<ASize; i++)
	{
		int count = 0;
		for (j = 0; j<ASize; j++)
		{
			if (A[i] == A[j])
			{
				count++;
			}
			if (count == ASize / 2)
			{
				return A[i];
			}
		}
	}
	return 0;

}
int main()
{
	int arr[] = { 1, 2, 3, 3 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = repeatedNTimes(arr, length);
	printf("%d\n", ret);
	return 0;
}
*/

/*给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), 
(a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/array-partition-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
int arrayPairSum(int* nums, int numsSize)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int sum = 0;
	for (i = 0; i<numsSize - 1; i++)
	{
		for (j = 0; j<numsSize - 1 - i; j++)
		{
			if (nums[j]>nums[j + 1])
			{
				tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i<numsSize; i += 2)
	{
		sum += nums[i];
	}
	return sum;

}
int main()
{
	int arr[] = { 1, 8, 5, 9, 3, 7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = arrayPairSum(arr,len);
	printf("%d\n", ret);
	return 0;
}
*/
