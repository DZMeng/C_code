#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//������
//1.����������
//+ - * / %
//2.��λ������
//   >>   <<
//3.λ������
// &   ^  |
//4.��ֵ������
// =  +=  -=  *=   /=  &=  ^=  |=  >>=   <<=

//int main()
//{
	//��/���ŵ����˶���������ʱ��ִ�е����������������������һ�����������ͻ�ִ�и������ĳ���
	//float a = 7 / 2.0;
	//int b = 7 % 2;//ȡģ,ȡģ����������ֻ��������
	//printf("%.3f\n", a);//.2fָС�������λ
	//printf("%d\n", b);
	//return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 10;//��ֵ
//	a = a + 3;//a=23
//	a += 3;//a=23
//	//����ͬ��
//	return 0;
//}

//��C������
//0��ʾ��
//��0��ʾ��

//sizeof�ǵ�Ŀ������

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����Ԫ�ظ���

//int a = 10;
	//int b = a++;//����++����ʹ�ã���++
	//int b=a,a=a+1;
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11
	//int b = ++a;//ǰ��++����++����ʹ��
	//a=a+1
	//int b = a;
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11
	//return 0;
	//ͬ��--��ǰ�úͺ���Ҳһ��
//}

//int main()
//{
//	//&&���߼���
//	//||���߼���
//	int a = 10;
//	int b = 20;
//	if (a && b)//if���ֻ��������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//����������
//exp1?exp2:exp3
//��   ��� �����//��1Ϊ�棬���2
//��  �����  ���//��1Ϊ�٣����3

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//	return 0;
//}

//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ���������һ�����ʽ�Ľ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//        c=8        a=28       c=5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}

//�ؼ���

//typedef

//typedef unsigned int uint;//��unsigned������Ϊuint
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;//�˴�uint��unsigned int ����һ��
//
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
// //���ξֲ�����
//	static int a = 1;//static���ξֲ�������ʱ�򣬾ֲ����������������ǲ����ٵģ������ϣ�static�ı��˱����Ĵ洢λ��
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//register���Ĵ�������

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3����ڼĴ�����
//	return 0;
//}

