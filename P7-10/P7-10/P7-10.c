#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.���泣��
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//�ַ��������ű�ʾ�ַ�
//	//"abc";//�ַ�����˫���ű�ʾ�ַ���
//	//const int a = 10;//��C�����У�const���ε�a�������Ǳ�����const������a����Ϊ�����������޷�ֱ�Ӷ�a�޸ģ��г��������ԡ�
//
//	return 0;
//}
//
//#define MAX 100
//#define STR "ABCDEFG"
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	MAX = 200;//error
//	return 0;
//}
//ö��
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//	enum Color c = RED;
//	
//}
#include<string.h>
//int main()
//{
	//#qwer$
	//char �ַ�����
	//'e'
	//char ch = 'w';//�����ַ�
	//"abcdef"��//�ַ���
	//C������û���ַ�������
	//char arr1[] = "abcdef";//f���൱���и����ص�\0
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f','\0'};
	//printf("%d\n", strlen(arr1));//6
	//printf("%d\n", strlen(arr2));
	//int len = strlen("abc");//strlenΪ���ַ������ȵ�һ��������string length  ͷ�ļ�Ϊstrign.h
	//printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("abc\n");//����\����ת���ַ�����\nת��Ϊ����
//
//	return 0;
//}
//??)--> ]
//??(--> [

//
//%d -��ӡ����
//%c -��ӡ�ַ�
//%s -��ӡ�ַ���
//%f -��ӡfloat���͵�����
//%lf -��ӡdouble���͵�����
//%zu -��ӡsizeof���͵�����
//

//int main()
//{
	//printf("%s","(are you ok\?\?)");
	//(are you ok]
	//printf("%c\n", '\'');
	//printf("\"");
	//printf("abc\\0def");
	//printf("D:\\VS2019\\lianxi\\P7-10.sln");//��ӡ·����ʱ�������˫��б��
	//printf("\a");
	//printf("%c\n", '\130');//ASCII����,�˽��Ƶı���ת���ΪX
	//printf("%c", '\x60');//ת���Ϊ`
	//printf("%d\n", strlen("c:\test\628\test.c"));//\t��\62Ϊת���ַ����ַ�������Ϊ14��ת���ַ�����Ϊ1��Ч��Ϊ4
	//return 0;
//}

//ע�ͣ���ע����
//��C���Ե�ע�ͷ������ôע�͵�,��101~104�д��롣
//��ôע���������ܿ�ݣ�����Cע�Ͳ�֧��Ƕ��ע�ͣ���ʼ�������ĵ�һ��*/�ͻ����ע��
/*
int a = 10;
int b = 20;
*/

//eg:
//int main()
//{
//	//����ָ�����P������ֵΪNULL
//	int* p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//C++��ע�ͷ�񣬼�//
//	return 0;
//}

//ע�͵ĺô�
//1.ע�Ϳ�������˼·
//2.ע�Ϳ��ԶԸ��ӵĴ�����н���
//3.д�����ʱ��дע�ͣ��ǰ����Լ�������˵�
//