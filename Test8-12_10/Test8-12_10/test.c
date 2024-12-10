#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main() {
//	char arr1[] = { 0 };
//	char arr2[] = "hellobit";
//	strcpy(arr1, arr2);
//	printf("%s\n%s\n", arr1,arr2);
//  return 0;
//}
//int main() {
//	
//	char arr2[] = "hellobit";
//	memset(arr2, 'x', 5);
//	puts(arr2);
//	
//	return 0;
//}


//写一个函数 交换两个数的值

//void Swap(int*pa,int*pb) 
//{
//	int temp = *pa;//pa 存储了 a 的地址，所以 *pa 就等于 a。
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 5;i <= 200; i++) 
//	{
//		if (is_prime(i) == 1) {
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

int is_leap_year(int n)
{
	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
	{
		return 1;
	}
	return 0;
}


int main()
{
	int y = 0;
	for (y = 2000;y <= 3000;y++)
	{
		//是闰年返回1不是返回0
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}