#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
int search(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (nums[mid]<target)
		{
			left = mid + 1;
		}
		else if (nums[mid]>target)
		{
			right = mid - 1;
		}
		else
		{

			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { -1, 0, 3, 5, 9, 12 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = search(arr,length,3);
	printf("%d\n", ret);
	return 0;
}
*/



