#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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

    // ���������С
    scanf("%d", &n);

    // ��������СС�ڵ���1��ֱ���������
    if (n <= 1)
    {
        printf("sorted");
        return 0;
    }

    // ��������Ԫ��
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag1 = 0; // �����ж�
    int flag2 = 0; // �����ж�

    // �������飬�ж��Ƿ��������
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            flag1 = 1; // ������������
        }
        else if (arr[i] > arr[i + 1])
        {
            flag2 = 1; // ���ڽ�������
        }
    }

    // �жϽ��
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

