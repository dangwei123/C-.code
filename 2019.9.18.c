#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
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


/*��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�
void Fun1(int value)
{
	int i = 0;
	printf("ż��λ��");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (value >> i) & 1);
	}
	printf("\n");
	printf("����λ��");
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


/* ���һ��������ÿһλ��
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

/*���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:
1999 2299
�������:7
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

/*��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��

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

/*��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
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

/*���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ�
�����������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
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



