#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//������(�����)
//	//int ret = 10 / 3;
//	////��ע�����ڳ�����������˵�����ߵĲ���������������ִ�е�����������
//	////���������С�������ŵ�����������һ���������Ǹ�����
//	//double ret2 =  10.0 / 3;
//	//printf("%d\n", ret);
//	//printf("%.1lf\n", ret2);
//
//
//	//int ret = 10 % 3;//ȡģ��ȡ�ࣩ�������������֮�������,ȡģ�����������ߵĲ�����ֻ��������
//	//printf("%d\n", ret);
//
//	return 0;
//}

//2����
//������2���Ʊ�ʾ��ʽ����ʵ��3��
//ԭ��
//����
//����
//�ڴ��д洢����ʼ�ǣ�����Ķ�����
//�����ڲ�����λ��ʱ���ƶ����ǲ���
//
//12 - ��ֵ
//2���ƣ�1100
//8���ƣ�14
//10���ƣ�12
//16���ƣ�c
//
//int main()
//{
//	//����һ������������ֱ��д�����Ķ����Ʊ�ʾ��ʽ�õ��ľ���ԭ��
//	//
//	//����
//	//������ԭ�롢���롢��������ͬ��
//	//������ԭ�롢���롢����Ҫ���������
//	//������ԭ��ķ���λ���䣬����λ��λȡ�������Ƿ���
//	//�����Ƿ���+1
//	//����ռ4���ֽڣ�32bit��
//	//00000000000000000000000000001010 - ԭ��
//	//00000000000000000000000000001010 - ����
//	//00000000000000000000000000001010 - ����
//	int a = 10;
//
//	//10000000000000000000000000001010 - ԭ��
//	//11111111111111111111111111110101 - ����
//	//11111111111111111111111111110110 - ����
//
//	//11111111111111111111111111110110 - ����
//	//10000000000000000000000000001001
//	//10000000000000000000000000001010 - ԭ�� 
//
//	int b = -10;
//
//	return 0;
//}
//

//���Ʋ��� <<

//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//00000000000000000000000000001010 -����
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	//10000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110 - ����
//	//
//	int b = a << 1;
//	//
//	//11111111111111111111111111101100 - b�Ĳ���
//	//10000000000000000000000000010011
//	//10000000000000000000000000010100 - b��ԭ��
//	//
//	printf("b=%d\n", b);//-20
//	printf("a=%d\n", a);
//
//	return 0;
//}

//
//���Ʋ�����
//1. ��������(ƽ������)
//2. �߼�����
//

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = a >> -2;
//	return 0;
//}
//

//
//& - ��2����λ��
//��Ӧ�Ķ�����λ��0����Ϊ0������ͬʱΪ1����Ϊ1
//
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 -����
//	//
//	int c = a & b;
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011
//	//
//	printf("%d\n", c);
//
//	return 0;
//}

//
//��2����λ��
//��Ӧ�Ķ�����λ��1��Ϊ1������ͬʱΪ0��Ϊ0
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 -����
//	//
//	int c = a | b;
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111011
//	//
//	printf("%d\n", c);
//
//	return 0;
//}
//

//^ - ��2����λ���
//��Ӧ�Ķ�����λ����ͬΪ0������Ϊ1
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = -5;
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011 -����
//	//
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	//-8
//	printf("%d\n", c);
//
//	return 0;
//}

//һ����̬�������⣺
//���ܴ�����ʱ��������������������ʵ�����������Ľ���

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int tmp = 0;//��ʱ����
//	printf("%d %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0, d = 0;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 5;
//	a += 5;
//	
//	int b = 12;
//	b = b >> 1;
//	b >>= 1;
//
//	return 0;
//}
//
//int main()
//{
//	//C������0��ʾ�٣���0��ʾ��
//	int flag = 0;
//	//if (flag)//flag���Ϊ�棬��.....
//	//{
//	//	printf("hehe\n");
//	//}
//	//if (!flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	printf("%d\n", flag);
//	printf("%d\n", !flag);
//
//	
//	return 0;
//}

//����һ�£���������
//C99�������
//�������;���������ʾ��ٵ�����
//
#include <stdbool.h>
//
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	//_Bool flag = false;
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}



//int main()
//{
//	int a = -10;
//	printf("%d\n", a);
//	printf("%d\n", -a);
//	return 0;
//}
//

//int main()
//{
//	int a = -10;
//	printf("%d\n", a);
//	printf("%d\n", +a);
//
//	return 0;
//}

//int main()
//{
//	unsigned int num = -10;
//	printf("%u\n", num);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int* pa = &a;
//
//	//char ch = 'w';
//	//char*pc = &ch;
//	//
//	//char arr[10] = { 0 };
//	//char* p2 = arr;
//	//char* p3 = &arr[0];
//
//	char* p = "abcdef";
//	printf("%p\n", p);
//	printf("%c\n", *p);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*    pa = &a;
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	*(int*)0x0012ff40;//err
//	return 0;
//}

//�������õ�ʱ��Ҫд()
//����sizeof��ߵ����ſ���ʡ�ԣ�˵��sizeof���Ǻ���
//
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof a);//ok
//	//printf("%d\n", sizeof(int));
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof arr);//ok
//	//printf("%d\n", sizeof(arr));//ok
//	//printf("%d\n", sizeof(int[10]));//ok
//
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3));
//	printf("%d\n", s);
//
//	return 0;
//}


//~ ��λȡ��
//00000000000000000000000000000000
//11111111111111111111111111111111 - ������ȫ1
//-1

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//?
//
//	return 0;
//}

//& | ^ >> << ~

//int main()
//{
//	int a = 9;
//	//00000000000000000000000000001001
//	//00000000000000000000000000010000      1<<4
//	//00000000000000000000000000011001
//	//
//	//��a�Ķ������е�5λ�ĳ�1
//	a |= (1<<4);
//	printf("%d\n", a);
//
//	//��a�Ķ������еĵ�5λ�Ļ��������0
//	//00000000000000000000000000011001
//	//11111111111111111111111111101111
//	//00000000000000000000000000001001
//
//	a &= (~(1 << 4));
//	printf("%d\n", a);//9
//
//	return 0;
//}
//