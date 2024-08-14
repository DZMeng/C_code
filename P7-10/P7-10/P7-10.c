#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.枚举常量
//int main()
//{
//	//30;
//	//3.14;
//	//'w';//字符，单引号表示字符
//	//"abc";//字符串，双引号表示字符串
//	//const int a = 10;//在C语言中，const修饰的a，本质是变量。const将变量a定义为常量，后续无法直接对a修改，有常量的属性。
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
//枚举
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	//三原色
//	//Red Green Blue
//	enum Color c = RED;
//	
//}
#include<string.h>
//int main()
//{
	//#qwer$
	//char 字符类型
	//'e'
	//char ch = 'w';//单独字符
	//"abcdef"；//字符串
	//C语言中没有字符串类型
	//char arr1[] = "abcdef";//f后相当于有个隐藏的\0
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f','\0'};
	//printf("%d\n", strlen(arr1));//6
	//printf("%d\n", strlen(arr2));
	//int len = strlen("abc");//strlen为求字符串长度的一个函数，string length  头文件为strign.h
	//printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//return 0;
//}

//转义字符
//int main()
//{
//	printf("abc\n");//例如\就是转义字符，将\n转变为换行
//
//	return 0;
//}
//??)--> ]
//??(--> [

//
//%d -打印整型
//%c -打印字符
//%s -打印字符串
//%f -打印float类型的数据
//%lf -打印double类型的数据
//%zu -打印sizeof类型的数据
//

//int main()
//{
	//printf("%s","(are you ok\?\?)");
	//(are you ok]
	//printf("%c\n", '\'');
	//printf("\"");
	//printf("abc\\0def");
	//printf("D:\\VS2019\\lianxi\\P7-10.sln");//打印路径的时候必须是双反斜杠
	//printf("\a");
	//printf("%c\n", '\130');//ASCII编码,八进制的编码转译后为X
	//printf("%c", '\x60');//转译后为`
	//printf("%d\n", strlen("c:\test\628\test.c"));//\t和\62为转义字符，字符串长度为14，转义字符长度为1，效果为4
	//return 0;
//}

//注释：标注解释
//在C语言的注释风格是这么注释的,如101~104行代码。
//这么注释整体代码很快捷，但是C注释不支持嵌套注释，开始后遇到的第一个*/就会结束注释
/*
int a = 10;
int b = 20;
*/

//eg:
//int main()
//{
//	//创建指针变量P，并赋值为NULL
//	int* p = NULL;
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//C++的注释风格，即//
//	return 0;
//}

//注释的好处
//1.注释可以梳理思路
//2.注释可以对复杂的代码进行解释
//3.写代码的时候写注释，是帮助自己，帮别人的
//