#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int a = 20;//ȫ�ֱ���
//int main()
//{
//	short age = 23;//����
//	int high = 186;//���
//	float weight = 114.6;//����
//	int b = 10;//�ֲ�����
//
//	return 0;
//}
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n",a);//��ȫ�ֱ�����ֲ�����������ͬʱ���ֲ�����
//	return 0;
//}
//���ǽ������ֲ�������ȫ�ֱ���������ͬ

//дһ�����룬�������������ĺ�
int main()
{
	int num1 = 0;
	int num2 = 0;//��ʼ��

	//����������
	scanf("%d %d", &num1, &num2);

	//�������
	int sum = num1 + num2;

	//���
	printf("%d\n", sum);

	return 0;
}
