#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

int main()
{
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++)
		{		
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && 
							(c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1
							&& (e == 4) + (a == 1) == 1)
						{
							if (a*b*c*d*e == 120)
							{
								printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
	}*/

/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4����
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main()
{
	char keller = 0;
	for (keller = 'a'; keller <= 'd'; keller++)
	{
		if ((keller != 'a') + (keller == 'c') + (keller == 'd') + (keller != 'd') == 3)
		{
			printf("%c\n", keller);
		}
	}
	return 0;
}*/

/*����Ļ�ϴ�ӡ������ǡ�
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
#define ROW 8
void Yanghui_strangle(int arr[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}
void Show(int arr[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[ROW][ROW] = { 0 };
	Yanghui_strangle(arr,ROW,ROW);
	Show(arr, ROW, ROW);
	return 0;
}*/