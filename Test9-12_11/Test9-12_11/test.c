#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 6;//��Ԫ��6�±�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����%d��Ԫ��\n", sz);
//	int m = binary_search(arr, k, 10);
//	//�ҵ��˷����±꣬δ�ҵ�����-1
//	if (m == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else 
//	{
//		printf("�ҵ��ˣ�%d", sz);
//	}
//	return 0;
//}

//void Print(unsigned int num)//1234
//{
//	if (num > 9)
//	{
//		Print(num / 10); 
//	}
//	printf("%d ", num % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}
//ģ��ʵ��strlen
//int arr_len(char* sp)
//{
//	int count = 0;
//	while (*sp != '\0')
//	{
//		count++;
//		sp++;
//	}
//	return count;
//}

//������ģ�����count
int arr_len(char* sp)
{
	if (*sp != '\0')
	{
		return 1 + arr_len(sp + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "bit";
	int m = arr_len(arr);
	printf("%d", m);
	return 0;
}