#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	/*assert(src != NULL);
//	assert(src != NULL);*/
//	assert(dest && src);//����ָ�����Ч��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy �ַ�������
//	char arr1[10] = { 0 };
//	char arr2[] = "yanggang";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}

//int main()
//{
//	const int num = 10;
//	int n = 1000;
//	const int* p = &num;
//	p = &n; 
//}

#include <stdio.h>
#include <assert.h>

//char* my_strcpy(char* dest, const char* src) 
//{
//    assert(dest && src);  // ����ָ����Ч��
//    char* ptr = dest;     // ���� dest ����ʼ��ַ���Ա㷵��
//    while (*dest++ = *src++) {
//        // ���ַ�����ֱ������ '\0' �ַ�
//    }
//    return ptr;  // ����Ŀ���ַ�������ʼ��ַ
//}
//
//int main() 
//{
//    char arr1[20] = { 0 };  // �㹻���Ŀ������
//    const char* arr2 = "Hello, World!";
//
//    // ʹ�� my_strcpy����������ص� dest ��ַ
//    printf("Original: %s\n", arr2);
//    my_strcpy(arr1, arr2);
//    printf("Copied: %s\n", arr1);
//
//    return 0;
//}
size_t my_strlen(const char* arr)
{
    assert(arr != NULL);
    const char* ptr = arr;
    while (*arr)
    {
        arr++;
        
    }
    return arr - ptr;
}
int main()
{
    char arr[] = "abcdef";
    printf("%zu\n", my_strlen(arr));
    return 0;
}