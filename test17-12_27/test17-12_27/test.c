#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i <= 32;i++)
//	{
//		if ((n >> 1) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
// 每次通过 n = n & (n - 1) 操作去除最右侧的 1
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d", ret);
//	return 0; 
//}

//获取一个整数的二进制序列中所有的偶数位和奇数位并打印出来

//void printEvenAndOddBits(int n)
//{
//    int i = 0;
//    printf("奇数位：");
//    for (i = 0;i < 32;i += 2)
//    {
//        int bit = (n >> i) & 1;
//        printf("%d ", bit);
//
//    }
//    printf("\n");
//
//    printf("偶数位：");
//    for (i = 1;i < 32;i += 2)
//    {
//        int bit = (n >> i) & 1;
//        printf("%d ", bit);
//
//    }
//}
//
//
//
//
//int main() {
//    int n;
//    printf("请输入一个整数: ");
//    scanf("%d", &n);  // 输入一个整数
//    printEvenAndOddBits(n);  // 调用函数打印奇数位和偶数位
//    return 0;
//}

//两个数二进制有多少个位不同

//int diff_count(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//异或操作符
//如果两个位相同，结果为 0；
//如果两个位不同，结果为 1
//int diff_count(int m, int n)
//{
//	int count = 0;
//	int temp = m ^ n;
//	//统计1的个数
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;//每清除一个 `1`，计数增加
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = diff_count(m, n);
//	printf("%d", ret);
//	return 0;
//}


////某年某月有多少天
//int isLeapYear(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//		return 1;
//	if (y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int daysInMonth(int y, int m)
//{
//	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//if (m == 2) {
//	//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//	//		return 29;  // 闰年，2月29天
//	//	}
//	//	else {
//	//		return 28;  // 平年，2月28天
//	//	}
//	//}
//	if(m == 2 && isLeapYear(y))
//		return 29;
//	return arr[m - 1];
//}
//int main()
//{
//	int m = 0;
//	int y = 0;
//	printf("输入你要查看的年份：");
//	scanf("%d", &y);
//	printf("输入你要查看的年月份：");
//	scanf("%d", &m);
//	if (m < 1 || m > 12) {
//		printf("无效的月份!\n");
//		return 1;
//	}
//	int ret = daysInMonth(y, m);
//	printf("%d年%d月有 %d 天。\n", y, m, ret);
//	return 0;
//}

//输入N*M矩阵，计算其中大于0的元素之和

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &tmp);
//			if (tmp > 0)
//			{
//				sum = sum + tmp;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//打印一个数的六进制

//int main()
//{
//	int i = 0;
//	int arr[20] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (--i;i >= 0;i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//递归实现打印一个数的六进制


//void printBase6(int n) {
//    if (n == 0) {
//        return;  // 递归结束条件，当 n 为 0 时停止
//    }
//    printBase6(n / 6);  // 递归处理较高位
//    printf("%d", n % 6);  // 打印当前位（最低位）
//}
//
//int main() {
//    int n;
//    printf("请输入一个整数: ");
//    scanf("%d", &n);
//
//    // 处理n为0的特殊情况
//    if (n == 0) {
//        printf("0");
//    }
//    else {
//        printBase6(n);  // 调用递归函数打印6进制表示
//    }
//
//    return 0;
//}

int main()
{
	int n = 0;
	printf("输入几个数：");
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	printf("输入%d个数字：",n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	printf("输入想要删除的数：");
	scanf("%d", &del);
	/*for (i = 0;i < n;i++)
	{
		if (arr[i] == del)
			arr[i] = 0;
	}
	for (i = 0;i < n;i++)
	{
		if (arr[i] != 0)
		{
			printf("%d", arr[i]);
		}
	}*/
	int j = 0;
	for (i = 0;i < n;i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0;i < j;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}