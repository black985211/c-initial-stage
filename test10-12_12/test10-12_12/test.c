#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求第n个斐波那契数
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


//递归和迭代求n的阶乘  1^2^3^4^5
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

//计算最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*int sz = 0;
//	printf("请输入数组个数:");
//	scanf("%d", &sz);*/
//	
//	int i = 0;
//	printf("请输入%d个整数:\n",sz);
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
//	printf("最大值为%d", max);
//	return 0;
//}

////计算1-100中出现了多少次9
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
