#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main() {
//    const char* strArray[] = { "Hello", "World", "C", "Programming" };
//
//    for (int i = 0; i < 4; i++) {
//        printf("%s\n", strArray[i]);
//    }
//
//    return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += (empty / 2);
//		empty = empty / 2 + empty % 2;
//	}
//
//
//}


//�����Ǿ����ж�

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10];
	int i = 0;
	
	for (i = 0;i < n;i++)
	{
		int j = 0;
		for (j = 0;j < n;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int flag = 1;
	for (i = 0;i < n;i++)
	{
		int j = 0;
		for (j = 0;j < i;j++)
		{
			if (arr[i][j] == 0)
			{
				flag = 0;
				goto end;
			}
		}
	}
end:
	if (flag == 1)
		printf("Yes");
	else if (flag == 0)
		printf("No");


}
