#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int ret = Fun(2);
//	printf("%d", ret);
//	return;
//}

//double pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//	else
//		return 1.0 / pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	printf("计算n^k\n请输入n:");
//	scanf("%d", &n);
//	printf("\n请输入k:");
//	scanf("%d", &k);
//	ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}


////输入一个非负整数，返回他的组成数字之和
////比如1729  1+7+2+9=19
//int Digitsum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + Digitsum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Digitsum(n);
//	printf("%d", ret);
//	return 0;
//}

//编写函数 resverse_string(char * string)
//实现给一个数组'abcdef'，打印'fedcba'
//void resverse_string(char* arr)
//{
//	int l = 0;
//	int r = strlen(arr)-1;
//	while (l <r)
//	{
//		char temp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = temp;
//		l++;
//		r--;
//	}
//
//}
//用递归实现

void resverse_string(char* arr, int left, int right)
{
    if (left >= right) {
        return; // 终止条件：左右指针相遇或交错
    }

    // 交换字符
    char temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // 递归处理剩余部分
    resverse_string(arr, left + 1, right - 1);
}
int main()
{
	char arr[10] = { 0 };
	printf("输入一个数组：");
	scanf("%s", arr);
	int length = strlen(arr);
    resverse_string(arr,0,length-1);
	printf("%s", arr);
    return 0;
}