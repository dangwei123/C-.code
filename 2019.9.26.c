#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*��дһ��������������һ���޷���������
����������Ʊ��ʽ������λ��Ϊ ��1�� �ĸ�����Ҳ����Ϊ������������
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