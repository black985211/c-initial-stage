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
//	//假设密码是123456
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码->\n");
//		scanf("%s", arr);
//		if (0 == strcmp(arr, "123456"))
//		{
//			printf("输入正确");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("输入错误第%d次\n",i+1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("输入错误%d次，请退出程序", i );
//	}
//	return 0;
//
//}



//猜数字游戏

void menu() {
	printf("******************************\n");
	printf("*********** 1 play  **********\n");
	printf("*********** 0 exit  **********\n");
	printf("******************************\n");
}

void game() 
{
	int num = 0;
	//生成随机数
	int ret=rand()%100+1;//生成随机数1-100
	//printf("%d\n", ret);
	
	while(ret!=num)
	{
		printf("请猜数字->");
		scanf("%d", &num);
		if (num < ret)
		{
			printf("猜小了\n");
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了！您是否继续？\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));//time函数返回时间戳, srand函数只要调用一次就可以了
	menu();
	int input = 0;
	do
	{
		printf("请输入->1/0\n");
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
			printf("输入错误，请重新输入\n");
			break;
		}
		
	} while (input);
	


	return 0;
}

//shutdown -s -t 60   60秒后关机
//shutdonw -a 取消关机

//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60000");  // 启动定时关机
//
//    printf("你的电脑将在60000秒后关机\n");
//
//    while (1) {
//        printf("请输入命令：");
//        scanf("%s", input);
//
//        if (strcmp(input, "取消命令") == 0) {
//            printf("取消关机\n");
//
//            system("shutdown -a");  // 取消定时关机
//            break;  // 跳出循环
//        }
//        else {
//            printf("无效命令，请重新输入。\n");
//        }
//    }
//
//    return 0;
//}
