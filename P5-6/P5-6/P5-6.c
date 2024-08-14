#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int a = 20;//全局变量
//int main()
//{
//	short age = 23;//年龄
//	int high = 186;//身高
//	float weight = 114.6;//体重
//	int b = 10;//局部变量
//
//	return 0;
//}
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n",a);//当全局变量与局部变量名字相同时，局部优先
//	return 0;
//}
//但是建议避免局部变量与全局变量名字相同

//写一个代码，计算两个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化

	//输入两个数
	scanf("%d %d", &num1, &num2);

	//计算求和
	int sum = num1 + num2;

	//输出
	printf("%d\n", sum);

	return 0;
}
