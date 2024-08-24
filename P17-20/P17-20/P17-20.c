#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//操作符
//1.算术操作符
//+ - * / %
//2.移位操作符
//   >>   <<
//3.位操作符
// &   ^  |
//4.赋值操作符
// =  +=  -=  *=   /=  &=  ^=  |=  >>=   <<=

//int main()
//{
	//当/除号的两端都是整数的时候，执行的是整数除法，如果两端有一个浮点数，就会执行浮点数的除法
	//float a = 7 / 2.0;
	//int b = 7 % 2;//取模,取模操作符两端只能是整数
	//printf("%.3f\n", a);//.2f指小数点后两位
	//printf("%d\n", b);
	//return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 10;//赋值
//	a = a + 3;//a=23
//	a += 3;//a=23
//	//其他同理
//	return 0;
//}

//在C语言中
//0表示假
//非0表示真

//sizeof是单目操作符

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组的元素个数

//int a = 10;
	//int b = a++;//后置++，先使用，后++
	//int b=a,a=a+1;
	//printf("%d\n", b);//10
	//printf("%d\n", a);//11
	//int b = ++a;//前置++，先++，后使用
	//a=a+1
	//int b = a;
	//printf("%d\n", b);//11
	//printf("%d\n", a);//11
	//return 0;
	//同理--的前置和后置也一样
//}

//int main()
//{
//	//&&，逻辑与
//	//||，逻辑或
//	int a = 10;
//	int b = 20;
//	if (a && b)//if语句只能运行真
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//条件操作符
//exp1?exp2:exp3
//真   输出 不输出//即1为真，输出2
//假  不输出  输出//即1为假，输出3

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);
//
//	return 0;
//}

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果就是最后一个表达式的结果

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

//关键字

//typedef

//typedef unsigned int uint;//将unsigned重命名为uint
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;//此处uint与unsigned int 作用一致
//
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()
//{
// //修饰局部变量
//	static int a = 1;//static修饰局部变量的时候，局部变量出了作用域是不销毁的，本质上，static改变了变量的存储位置
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

//register，寄存器变量

//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3存放在寄存器中
//	return 0;
//}

