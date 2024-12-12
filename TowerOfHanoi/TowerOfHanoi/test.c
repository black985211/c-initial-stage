#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void hanoi(int n, char from, char temp, char to) {//n����  A�����������������

    if (n == 1) {
        move(n, from, to);//���ֻ��һ�����ӣ�ֱ�Ӵ�  A �ƶ���  C
    }
    else {
        hanoi(n - 1, from, to, temp);//�� n-1�����Ӵ�  A �ƶ���  B
        move(n, from, to);
        hanoi(n - 1, temp, from, to); //�� n-1�����Ӵ� B �ƶ���  C
    }

}
void move(int n, char x, char y) {
    printf("��%d�����Ӵ�%c--->%c\n", n, x, y);
}
int main() {
    int num;///Ҫ�ƶ���������
    printf("������Ҫ�ƶ�����������");
    scanf("%d", &num);
    hanoi(num, 'A', 'B', 'C');
    return 0;
}


