#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���n��쳲�������
//1 1 2 3 5 8 13 21 34 55
//fib(n)= 1  n<=2;  =fib(n-1)+fib(n-2)  n>2
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 2) + fib(n - 1);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//�ݹ�͵�����n�Ľ׳�  1^2^3^4^5
//int fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac1(n - 1);
//	}
//}
//int fac2(int n)
//{
//	int i = 0;
//	int m = 1;
//	for (i = 1;i <= n;i++)
//	{
//		m = m * i;
//	}
//	return m;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = fac1(n);
//	int ret2 = fac2(n);
//	printf("%d ", ret1);
//	printf("%d ", ret2);
//	return 0;
//}

//�������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int sz = 0;
//	printf("�������������:");
//	scanf("%d", &sz);*/
//	
//	int i = 0;
//	printf("������%d������:\n",sz);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	int max = arr[0];
//	for (i=0;i<sz;i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("���ֵΪ%d", max);
//	return 0;
//}

////����1-100�г����˶��ٴ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10==9||i/10==9) 
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
