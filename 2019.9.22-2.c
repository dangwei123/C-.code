#define _CRT_SECURE_NO_WARNINGS 1
/*��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳��ÿһ�ж��ǰ��մ��ϵ��µ�����
˳�������������һ������������������һ����ά�����һ���������ж��������Ƿ���
��������ʱ�临�Ӷ�o��row+col��*/
#include<stdio.h>
void Find_Num(int arr[][4], int *px, int *py, int key)
{
	int row = 0;
	int col = 3;
	while (row <= 3 && col >= 0)
	{
		if (arr[row][col] > key)
		{
			col--;
		}
		if (arr[row][col] < key)
		{
			row++;
		}
		else
		{
			*px = row;
			*py = col;
			return;
		}
	}
	*px = -1;
	*py = -1;
	return;
}
int main()
{
	int arr[][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
	int x = 4;
	int y = 4;
	Find_Num(arr,&x,&y,10);
	printf("%d %d\n", x, y);
	return 0;
}