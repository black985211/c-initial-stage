#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������̨��  ����ÿ�ο���һ��̨�׻�����̨��
int jumpStair(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
		return jumpStair(n - 1) + jumpStair(n - 2);
}


int main()
{
	int n = 0;
	printf("���ж���̨�ף�");
	scanf("%d", &n);
	int ret =jumpStair(n);
	printf("����%d������", ret);
	return 0;

}