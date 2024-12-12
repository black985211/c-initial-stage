#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void hanoi(int n, char from, char temp, char to) {//n代表  A柱子上面的盘子数量

    if (n == 1) {
        move(n, from, to);//如果只有一个盘子，直接从  A 移动到  C
    }
    else {
        hanoi(n - 1, from, to, temp);//将 n-1个盘子从  A 移动到  B
        move(n, from, to);
        hanoi(n - 1, temp, from, to); //将 n-1个盘子从 B 移动到  C
    }

}
void move(int n, char x, char y) {
    printf("第%d个盘子从%c--->%c\n", n, x, y);
}
int main() {
    int num;///要移动的盘子数
    printf("请输入要移动的盘子数：");
    scanf("%d", &num);
    hanoi(num, 'A', 'B', 'C');
    return 0;
}


