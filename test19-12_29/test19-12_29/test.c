#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//	//结构体成员
//	char name[5];
//	int age;
//	char sex[10];
//	float score;
//}s4, s5;//结构体变量（全局）
//
//int main()
//{
//	struct Stu s1, s2, s3;//也是结构体变量（局部）
//	return 0;
//}

//struct Stu
//{
//	//结构体成员
//	char name[10];
//	int age;
//	char sex[10];
//	float score;
//};
//
//int main()
//{
//	struct Stu s1 = { "张三",10,"男",98.5f };
//	struct Stu s2 = { "李四",11,"男",100 };
//	printf("%s,%d,%s,%.1f\n", s1.name, s1.age, s1.sex, s1.score);
//	printf("%s,%d,%s,%.1f\n", s2.name, s2.age, s2.sex, s2.score);
//	return 0;
//}

//struct P
//{
//	char name1[10];
//	int age;
//};
//
//struct S
//{
//	struct P info;
//	int num;
//};
//
//void print1(struct S info1)
//{
//	printf("姓名：%s,年龄：%d,学号：%d\n", info1.info.name1, info1.info.age, info1.num);
//}
//void print2(struct S* p_info1)
//{
//	printf("姓名：%s,年龄：%d,学号：%d\n", p_info1->info.name1, p_info1->info.age, p_info1->num);
//
//}
//int main()
//{
//	struct S info1;
//	scanf("%s,%d,%d", &(info1.info.name1), &(info1.info.age), &(info1.num));
//	printf("姓名：%s,年龄：%d,学号：%d\n", info1.info.name1, info1.info.age,info1.num);
//	print1(info1);
//	print2(&info1);
//	return 0;
//}
#include <string.h>
//void reverseString(char* p)
//{
//	int start = 0;
//	int end = strlen(p) - 1;
//	while (start < end)
//	{
//		char temp = *(p + start);
//		*(p + start) = *(p + end);
//		*(p + end) = temp;
//		start++;
//		end--;
//	}
//}
void reverseString(char* p)
{
	char* left = p;
	char* right = p + (strlen(p) - 1);
	
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	reverseString(arr);
	printf("%s", arr);
}