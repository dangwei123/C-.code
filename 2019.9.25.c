#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*编写一个函数，其作用是将输入的字符串反转过来。
输入字符串以字符数组 char[] 的形式给出。
int My_strlen(char *str)
{
	if (*str != '\0')
	{
		return 1 + My_strlen(str+1);
	}
	else
	{
		return 0;
	}
}
//非递归
void reverseString1(char* s, int sSize)
{
	char tmp = 0;
	int left = 0;
	int right = sSize - 1;
	while (left<right)
	{
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}

}
//递归
void reverseString2(char* str)
{
	char tmp = *str;
	int len = My_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (My_strlen(str+1) >= 2)
	{
		reverseString2(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main()
{
	char str[] = "hello";
	int size = My_strlen(str);
	reverseString2(str);
	printf("%s\n", str);
	return 0;
}
*/

/*给定一个非负整数数组 A，返回一个数组，在该数组中， 
A 的所有偶数元素之后跟着所有奇数元素。
int *sortArrayByParity(int *arr, int length)
{
	int left = 0;
	int right = length - 1;
	int tmp = 0;
	while (left < right)
	{
		while (arr[left] % 2 == 0)
		{
			left++;
		}
		while (arr[right] % 2 != 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	return arr;
}
void Show(int *arr, int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	sortArrayByParity(arr,length);
	Show(arr, length);
	return 0;
}
*/

