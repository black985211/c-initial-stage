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
// ÿ��ͨ�� n = n & (n - 1) ����ȥ�����Ҳ�� 1
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

//��ȡһ�������Ķ��������������е�ż��λ������λ����ӡ����

//void printEvenAndOddBits(int n)
//{
//    int i = 0;
//    printf("����λ��");
//    for (i = 0;i < 32;i += 2)
//    {
//        int bit = (n >> i) & 1;
//        printf("%d ", bit);
//
//    }
//    printf("\n");
//
//    printf("ż��λ��");
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
//    printf("������һ������: ");
//    scanf("%d", &n);  // ����һ������
//    printEvenAndOddBits(n);  // ���ú�����ӡ����λ��ż��λ
//    return 0;
//}

//�������������ж��ٸ�λ��ͬ

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

//��������
//�������λ��ͬ�����Ϊ 0��
//�������λ��ͬ�����Ϊ 1
//int diff_count(int m, int n)
//{
//	int count = 0;
//	int temp = m ^ n;
//	//ͳ��1�ĸ���
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;//ÿ���һ�� `1`����������
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


////ĳ��ĳ���ж�����
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
//	//		return 29;  // ���꣬2��29��
//	//	}
//	//	else {
//	//		return 28;  // ƽ�꣬2��28��
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
//	printf("������Ҫ�鿴����ݣ�");
//	scanf("%d", &y);
//	printf("������Ҫ�鿴�����·ݣ�");
//	scanf("%d", &m);
//	if (m < 1 || m > 12) {
//		printf("��Ч���·�!\n");
//		return 1;
//	}
//	int ret = daysInMonth(y, m);
//	printf("%d��%d���� %d �졣\n", y, m, ret);
//	return 0;
//}

//����N*M���󣬼������д���0��Ԫ��֮��

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


//��ӡһ������������

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

//�ݹ�ʵ�ִ�ӡһ������������


//void printBase6(int n) {
//    if (n == 0) {
//        return;  // �ݹ������������ n Ϊ 0 ʱֹͣ
//    }
//    printBase6(n / 6);  // �ݹ鴦��ϸ�λ
//    printf("%d", n % 6);  // ��ӡ��ǰλ�����λ��
//}
//
//int main() {
//    int n;
//    printf("������һ������: ");
//    scanf("%d", &n);
//
//    // ����nΪ0���������
//    if (n == 0) {
//        printf("0");
//    }
//    else {
//        printBase6(n);  // ���õݹ麯����ӡ6���Ʊ�ʾ
//    }
//
//    return 0;
//}

int main()
{
	int n = 0;
	printf("���뼸������");
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	printf("����%d�����֣�",n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	printf("������Ҫɾ��������");
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