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
//	printf("����n^k\n������n:");
//	scanf("%d", &n);
//	printf("\n������k:");
//	scanf("%d", &k);
//	ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}


////����һ���Ǹ����������������������֮��
////����1729  1+7+2+9=19
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

//��д���� resverse_string(char * string)
//ʵ�ָ�һ������'abcdef'����ӡ'fedcba'
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
//�õݹ�ʵ��

void resverse_string(char* arr, int left, int right)
{
    if (left >= right) {
        return; // ��ֹ����������ָ�������򽻴�
    }

    // �����ַ�
    char temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // �ݹ鴦��ʣ�ಿ��
    resverse_string(arr, left + 1, right - 1);
}
int main()
{
	char arr[10] = { 0 };
	printf("����һ�����飺");
	scanf("%s", arr);
	int length = strlen(arr);
    resverse_string(arr,0,length-1);
	printf("%s", arr);
    return 0;
}