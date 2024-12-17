#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//对数字冒泡排序
void sort(int* arr, int sz)
{
	//第一趟排序
	int i = 0;
	for (i = 0;i < sz-1;i++)
	{
		//第一趟排序进行了几次比较 //2 4 1 5 3 7 6 0 8 9 元素个数n, 第一次n-1 第二次 n-2
		int j = 0;
		for (j = 0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
}



int main()
{
	int arr[] = { 9,2,4,1,5,3,7,6,0,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
}