#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
/*斐波契那常数*/
/*递归

int Feiboqina1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Feiboqina(n-1) + Feiboqina(n-2);
	}
}
int main()
{
	int ret=Feiboqina(5);
	printf("%d\n", ret);
	return 0;
}*/

/*非递归 
int Feiboqina(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	int i = 0;
	if (n == 1 || n == 2)
	{
		f3 = 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
	}
	return f3;
}
int main()
{
	int ret = Feiboqina(5);
	printf("%d\n", ret);
	return 0;
}*/
/*给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
找出那个只出现了一次的元素。
int Once_(int *arr,int length)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < length; i++)
	{
		sum ^= arr[i];
	}
	return sum;
}
int main()
{
	int arr[] = { 6, 8, 3, 45, 23, 8, 3, 6, 23 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int ret = Once_(arr,length);
	printf("%d\n", ret);
	return 0;
}*/

/*给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
void Fun1(int n)
{
	if (n&(n - 1) == 0)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}
void Fun2(int n)
{
	if (((int)pow((double)2,(double)31)%n) == 0)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}
int main()
{
	Fun1(46);
	Fun2(44);
	return 0;
}*/

/*实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

char * toLowerCase(char * str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;

}
int main()
{
	char str[] = "HELLO WorlD";
	toLowerCase(str);
	printf("%s\n", str);

}*/


/*给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
char *reverseWords(char * s)
{
	char *start = NULL;
	char *cur = s;
	char *left = NULL;
	char *right = NULL;
	char tmp = 0;
	while (*cur != '\0')
	{
		start = cur;
		while (*cur != ' '&&*cur != '\0')
		{
			cur++;
		}
		left = start;
		right = cur - 1;
		while (left<right)
		{
			tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
			right--;
		}
		if (*cur == ' ')
		{
			cur++;
		}
	}
	return s;
}
int main()
{
	char str[] = "Let's take LeetCode contest";
	reverseWords(str);
	printf("%s\n", str);
	return 0;
}*/

