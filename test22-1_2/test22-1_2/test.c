#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void mov(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left<right)&&arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while ((left < right)&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//	
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	mov(arr, sz);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//arr1={2 5 8 9 11}
//arr2={3 4 6 7 9 10 11 12}
//arr3={2 3 4 5 6 7 8 9 9 10 11 11 12}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[5];
//	int arr2[8];
//	int arr3[13];
//	scanf("%d", &n, &m);
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else 
//		{
//			arr3[k] = arr2[j];
//			i++;
//			k++;
//		}
//	}
//	if (i == n)
//	{
//		while (j < m)
//		{
//			arr3[k++] = arr2[j++];
//		}
//	}
//	else
//	{
//		while (i < n)
//		{
//			arr3[k++] = arr1[i++];
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}


#include <stdio.h>

int main()
{
    int n = 0;
    int arr[10];

    // 输入数组大小
    scanf("%d", &n);

    // 如果数组大小小于等于1，直接输出有序
    if (n <= 1)
    {
        printf("sorted");
        return 0;
    }

    // 输入数组元素
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag1 = 0; // 升序判断
    int flag2 = 0; // 降序判断

    // 遍历数组，判断是否升序或降序
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            flag1 = 1; // 存在升序趋势
        }
        else if (arr[i] > arr[i + 1])
        {
            flag2 = 1; // 存在降序趋势
        }
    }

    // 判断结果
    if (flag1 && flag2)
    {
        printf("unsorted");
    }
    else
    {
        printf("sorted");
    }

    return 0;
}

