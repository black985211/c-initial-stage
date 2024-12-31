#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	/*assert(src != NULL);
//	assert(src != NULL);*/
//	assert(dest && src);//断言指针的有效性
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	//strcpy 字符串拷贝
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
//    assert(dest && src);  // 断言指针有效性
//    char* ptr = dest;     // 保存 dest 的起始地址，以便返回
//    while (*dest++ = *src++) {
//        // 逐字符复制直到遇到 '\0' 字符
//    }
//    return ptr;  // 返回目标字符串的起始地址
//}
//
//int main() 
//{
//    char arr1[20] = { 0 };  // 足够大的目标数组
//    const char* arr2 = "Hello, World!";
//
//    // 使用 my_strcpy，并输出返回的 dest 地址
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