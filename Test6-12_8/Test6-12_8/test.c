#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int n = 0;
//	while (n<=10) 
//	{
//		/*if (5==n)
//		{
//			break;
//		}*/
//		
//		n++;
//		if (5 == n)
//		{
//			continue;
//		}
//		printf("%d ", n);
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	ch = getchar();//输入一个字符
//	putchar(ch);//输出一个字符
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar() )!= EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//}

//int main() {
//	char ps[20] = { 0 };
//	int ch=0;
//	printf("请输入密码->");
//	scanf("%s", ps);
//	while ((getchar()) != '\n') 
//	{
//		;
//	}
//	printf("请确认密码Y/N");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//
//	}
//	else {
//		printf("确认失败");
//	}
//
//	return 0;
//}

//计算n的阶乘  5!=5^4^3^2^1
//int main() 
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i < n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//
//}


//计算1！+2！+3！....
//int main() 
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);//3
//	for (j = 1;j <= n;j++) {
//		ret = 1;
//		for (i = 1;i <= j;i++)
//		{
//			ret = ret * i;//1! 
//		}
//		sum = sum + ret;//1!
//	}
//	printf("%d", sum);
//	return 0;
//
//}

//有序数组 二分查找
int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int right = 9;
	int left = 0;
	int k = 0;
	int mid = 0;
	int flag = 0;
	scanf("%d", &k);
	while (left<=right) {
		 mid = (right + left) / 2;
		if (arr[mid] < k) {
			left=mid+1;
		}
		else if (arr[mid] > k) {
			right=mid-1;
		}
		else {
			printf("找到了下标为:%d",mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("没找到");
	}
	return 0;
}