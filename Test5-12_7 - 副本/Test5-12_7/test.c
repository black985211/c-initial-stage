#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
get_max(int x, int y) {
	if (x>y) 
		return x;

	
	else
	
		return y;
	}


//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int M = get_max(a, b);
//	printf("%d", M);
//	return 0;
//}
// 
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("%d>%d\n", a, b);
//	}
//	else if (a < b) {
//		printf("%d<%d\n", a, b);
//	}
//	else {
//		printf("%d=%d\n", a, b);
//	}
//	return 0;
//}


//int main() {
//	int score = 0;
//	while (scanf("%d", &score) == 1) {
//		if (score>=90&&score<=100) {
//			printf("Perfect\n");
//
//		}
//	}
//	return 0;
//}

//int main() {
//	double score[5] = { 0.0 };
//	int i = 0;
//	//����ÿ��ѧ��
//	while (i < 5) {
//	//����ÿ��ѧ���ĳɼ�
//		int j = 0;
//		double sum = 0.0;
//	//����
//		while (j < 5) {
//			scanf("%lf", &score[j]);
//			sum = sum + score[j];
//			j++;
//			
//		}
//	//���
//		j = 0;
//		while (j < 5) {
//			printf("%lf ", score[j]);
//			j++;
//		}
//		printf("%.1lf\n", sum);
//		i++;
//	}
//	return 0;
//}

struct Stu {
	char name[20];
	char sex[5];
	int age;
};

void Print(struct Stu* sp) {
	printf("%s %s %d\n", sp->name, sp->sex, sp->age);
	printf("%s %s %d\n", (*sp).name, (*sp).sex, (*sp).age);

}


int main() {
	/*struct Stu X = { "zhangsan","��",20 };
	struct Stu Y = { "xiaohong","Ů",20 };
	printf("Name:%s\n", X.name);
	Print(&X);*/
	int day = 0;
	scanf("%d", &day);
	switch (day) 
	{
	case 1:
		printf("��һ\n");
		break;
	case 2:
		printf("�ܶ�\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("����\n");
		break;
	case 5:
		printf("����\n");
		break;
	case 6:
		printf("����\n");
		break;
	case 7:
		printf("����\n");
		break;
	default:
		printf("ѡ�����");
		break;
	}
	return 0;
}