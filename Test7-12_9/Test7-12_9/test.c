#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h>  // sleep()
#include <stdlib.h>  // system()
#include <string.h>  // strcmp()
#include<time.h>

//int main()
//{
//	char arr1[] = { "yang gang 030614" };
//	char arr2[] = { "****************" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() 
//{
//	char arr[20] = { 0 };
//	int flag = 0;
//	int i = 0;
//	//����������123456
//	for (i = 0;i < 3;i++)
//	{
//		printf("����������->\n");
//		scanf("%s", arr);
//		if (0 == strcmp(arr, "123456"))
//		{
//			printf("������ȷ");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("��������%d��\n",i+1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�������%d�Σ����˳�����", i );
//	}
//	return 0;
//
//}



//��������Ϸ

void menu() {
	printf("******************************\n");
	printf("*********** 1 play  **********\n");
	printf("*********** 0 exit  **********\n");
	printf("******************************\n");
}

void game() 
{
	int num = 0;
	//���������
	int ret=rand()%100+1;//���������1-100
	//printf("%d\n", ret);
	
	while(ret!=num)
	{
		printf("�������->");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("��С��\n");
		}
		else if (num > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ����Ƿ������\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));//time��������ʱ���, srand����ֻҪ����һ�ξͿ�����
	menu();
	int input = 0;
	do
	{
		printf("������->1/0\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("begin\n");
			game();
			break;
		case 0:
			printf("end\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	} while (input);
	


	return 0;
}

//shutdown -s -t 60   60���ػ�
//shutdonw -a ȡ���ػ�

//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60000");  // ������ʱ�ػ�
//
//    printf("��ĵ��Խ���60000���ػ�\n");
//
//    while (1) {
//        printf("���������");
//        scanf("%s", input);
//
//        if (strcmp(input, "ȡ������") == 0) {
//            printf("ȡ���ػ�\n");
//
//            system("shutdown -a");  // ȡ����ʱ�ػ�
//            break;  // ����ѭ��
//        }
//        else {
//            printf("��Ч������������롣\n");
//        }
//    }
//
//    return 0;
//}
