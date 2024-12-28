#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针-指针（的绝对值），是两个指针之间的元素个数
//int my_strlen(char* str)
//{
//	int count = 0;
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//打印1-10
int main()
{
	int arr[10] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	//for (i = 0;i < sz;i++)
	//{
	//	*p++ = i+1;
	//}
	//p = arr;
	//for (i = 0;i < sz;i++)
	//{
	//	printf("%d ", *p++);
	//}
	for (i = 0;i < sz;i++)
	{
		*(p + i) = i + 1;
	}
	for (i = 0;i < sz;i++)
	{
		//printf("%d ", arr[i]);
		printf("%d ", *(arr+i));

	}
	return 0;
}