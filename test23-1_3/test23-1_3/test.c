#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	while (m % a != 0 || m % b != 0)
//	{
//	}
//		m++;
//	return 0;
//}


// �������������Լ����GCD��
//int gcd(int a, int b) {
//    while (b != 0) {
//        int tmp = b;
//        b = a % b;
//        a = tmp;
//    }
//    return a;
//}
//
//// ������������С��������LCM��
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);  // ���ù�ʽ LCM(a, b) = (a * b) / GCD(a, b)
//}
//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//
//    // ������С�����������
//    int ret = lcm(a, b);
//    printf("%d\n", ret);
//
//    return 0;
//}

#include<string.h>
#include<assert.h>
void reverse(char* left, char* right)
{
    assert(left && right);
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;  // �����ƶ�
        right--; // �����ƶ�
    }
}

int main()
{
    char arr[15] = "I like beijing";
    int len = strlen(arr);
    reverse(arr, arr + len - 1);//gnijieb ekil I
    char* cur = arr;
    
    while (*cur)
    {
        char* start = cur;
        while (*cur != ' '&& *cur!='\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        if (*cur != '\0')
        {
            cur++;
        }
       
    }
    printf("%s", arr);
    return 0;
}