#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>]
#include<math.h>

//int main()
//{
//	int i = 0;
//	
//	for (i=0;i<10000;i++)
//	{
//		int tmp=0;
//		int n=1;
//		tmp = i;
//		while (tmp>9)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int) pow(tmp % 10,n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//add_numbers(int a, int b) {
//    int sum = a + b;
//    return sum;
//}
//
//int main() {
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//
//    int ret = add_numbers(x, y);
//    printf("%d", ret);
//    return 0;
//}
#include <stdio.h>

void modify_values(int* a, int* b) {
    *a = 100;  // 修改变量 a 的值
    *b = 200;  // 修改变量 b 的值
}

int main() {
    int x = 10;
    int y = 20;

    // 打印变量的地址和值
    printf("Before modification: x = %d, y = %d\n", x, y);
    printf("Address of x: %p, Address of y: %p\n", (void*)&x, (void*)&y);

    // 调用函数修改 x 和 y
    modify_values(&x, &y);

    // 打印修改后的值
    printf("After modification: x = %d, y = %d\n", x, y);

    return 0;
}
