#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + Strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = Strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n", sz);
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	////正序打印
//	//for (i = 0;i < sz;i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	////倒序打印
//	//for(i = sz-1;i>=0;i--)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	
//	return 0;
//}


//二维数组
int main()
{
	int arr[][2] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	for (i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
	{
		int j = 0;
		for (j = 0;j < sizeof(arr[0]) / sizeof(arr[0][0]);j++)
		{
			printf("%d ", arr[i][j]);
		}


		printf("\n");

		
	}
	return 0;
}