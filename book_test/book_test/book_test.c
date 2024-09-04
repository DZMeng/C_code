#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//第一章习题

//4

//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}

//5

//int main()
//{
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	return 0;
//}

//6

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = a > b ? a : b;//比较a，b之间的大小，取大值
//	int e = d > c ? d : c;//比较a，b中大的值与c的大小关系，得出a，b，c中的最大值
//	printf("%d\n", e);
//	return 0;
//}

//第三章习题

//1

//int main()
//{
//	float p, r, n;
//	r = 0.07;
//	n = 10;
//	p = pow(1 + r, n);
//	printf("p=%f\n", p);
//	return 0;
//}

//2

//int main()
//{
//	double p1,r1,n1;
//	一次性存5年
//	r1 = 0.03;
//	n1 = 5;
//	p1 = 1000 * (1 + n1 * r1);
//	先存2年，再存三年
//	double r2, r3,n2,n3,p2,p3;
//	r2 = 0.021;
//	r3 = 0.0275;
//	p2 = 1000 * (1 + 2 * r2);
//	p3 = p2 * (1 + 3 * r3);
//	先存3年，再存两年
//	double p4, p5;
//	p4 = 1000 * (1 + 3 * r3);
//	p5 = p4 * (1 + 2 * r2);
//	反复存一年，存5次
//	double r4,p6,p7,p8,p9,p10;
//	r4 = 0.015;
//	p6 = 1000 * (1 + r4);//1
//	p7 = p6 * (1 + r4);//2
//	p8 = p7 * (1 + r4);//3
//	p9 = p8 * (1 + r4);//4
//	p10 = p9 * (1 + r4);//5
//	存活期
//	double r5, p11;
//	r5 = 0.0035;
//	p11 = 1000*pow(1+r5/4,4*5);
//	printf("p1=%f\np3=%f\np5=%f\np10=%f\np11=%f\n",p1,p3,p5,p10,p11);
//	return 0;
//}

//3

//int main()
//{
//	float r,p,d,m;
//	r = 0.01;
//	p = 6000;
//	d = 300000;
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("m=%5.2f\n", m);
//	return 0;
//}

//6

//int main()
//{
//	char c1, c2, c3, c4, c5;
//	c1 = 'C';
//	c2 = 'h';
//	c3 = 'i';
//	c4 = 'n';
//	c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	putchar('\n');
//	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);
//	return 0;
//}

//7

//int main()
//{
//	double r,h,v1,v2,area,s,c;
//	r = 1.5;
//	h = 3;
//	//圆的
//	c = 2 * 3.1415926 * r;//周长
//	area = 3.1415926 * r * r;//面积
//	s = 4 * r * r * 3.1415926;//表面积
//	v1 = 4 / 3 * r * r * r;//体积
//	//圆柱的体积
//	v2 = area * h;
//	printf("周长=%4.2f\n面积=%4.2f\n表面积=%4.2f\n体积=%4.2f\n圆柱的体积=%4.2f\n", c,area,s,v1,v2);
//	return 0;
//}

//第四章

//4

//int main()
//{
//	int a, b, c,r,t;
//	scanf("%d %d %d", &a, &b, &c);
//	r = a > b ? a : b;
//	t = r > c ? r : c;
//	printf("%d\n", t);
//	return 0;
//}

//5

//int main()
//{
//	int i, k;
//	scanf("%d", &i);
//	if (i > 1000)
//	{		printf("Error!Please rescanf\n");
//	scanf("%d", &i);
//	}
//	else
//		k = sqrt(i);
//	printf("%d的平方根的整数部分是%d\n", i, k);
//	return 0;
//}

//6

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("%d\n", y);
//	return 0;
//}

//8

//int main()
//{
//	float score;
//	char grade;
//	scanf("%f", &score);
//	while (score > 100 || score < 0)
//	{
//		printf("\n输入有误，请重新输入");
//		scanf("%f", &score);
//	}
//	switch ((int)(score/10))
//	{
//	case 10:
//	case 9:grade = 'A'; break;
//	case 8:grade = 'B'; break;
//	case 7:grade = 'C'; break;
//	case 6:grade = 'D'; break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:grade = 'E'; break;
//	}
//	printf("成绩是%5.1f,相应的等级是%c\n", score, grade);
//	return 0;
//}

//9

//int main()
//{
//	int num, indiv, ten, hundred, thousand, ten_thousand, place;
//	scanf("%d", &num);
//	if (num > 9999)
//		place = 5;
//	else if (num > 999)
//		place = 4;
//	else if (num > 99)
//		place = 3;
//	else if (num > 9)
//		place = 2;
//	else
//		place = 1;
//	printf("位数：%d\n", place);
//	printf("每位数字为：");
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//	ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//	indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
//	//求反序数字
//	switch (place)
//	{
//	case 5:printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
//		   printf("\n反序数字为：");
//		   printf("%d,%d,%d,%d,%d", indiv, ten, hundred, thousand, ten_thousand);
//		   break;
//	case 4:printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
//		   printf("\n反序数字为：");
//		   printf("%d,%d,%d,%d", indiv, ten, hundred, thousand);
//		   break;
//	case 3:printf("%d,%d,%d",hundred, ten, indiv);
//		   printf("\n反序数字为：");
//		   printf("%d,%d,%d", indiv, ten, hundred);
//		   break;
//	case 2:printf("%d,%d", ten, indiv);
//	  	   printf("\n反序数字为：");
//		   printf("%d,%d", indiv, ten);
//		   break;
//	case 1:printf("%d",indiv);
//		   printf("\n反序数字为：");
//		   printf("%d", indiv);
//		   break;
//	}
//	return 0;
//}

//10

//int main()//if写
//{
//	int i;
//	double bonus, bon1, bon2, bon4, bon6, bon10;
//	bon1 = 100000 * 0.1;
//	bon2 = bon1 + 100000 * 0.075;
//	bon4 = bon2 + 100000 * 0.05;
//	bon6 = bon4 + 100000 * 0.03;
//	bon10 = bon6 + 400000 * 0.015;
//	scanf("%d", &i);
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bon1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = bon2 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = bon4 + (i - 400000) * 0.03;
//	else if (i <= 1000000)
//		bonus = bon6 + (i - 600000) * 0.015;
//	else
//		bonus = bon10 + (i - 1000000) * 0.01;
//	printf("奖金是：%10.2f\n", bonus);
//	return 0;
//}

//int main()//switch写
//{
//	int i;
//	double bonus, bon1, bon2, bon4, bon6, bon10;
//	bon1 = 100000 * 0.1;
//	bon2 = bon1 + 100000 * 0.075;
//	bon4 = bon2 + 100000 * 0.05;
//	bon6 = bon4 + 100000 * 0.03;
//	bon10 = bon6 + 400000 * 0.015;
//	int branch;
//	scanf("%d", &i);
//	branch = i / 100000;
//	if (branch > 10)
//		branch = 10;
//	switch (branch)
//	{
//	case 0:bonus = i * 0.1; break;
//	case 1:bonus = bon1 + (i - 100000) * 0.075; break;
//	case 2:
//	case 3:bonus = bon2 + (i - 200000) * 0.05; break;
//	case 4:
//	case 5:bonus = bon4 + (i - 400000) * 0.03; break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:bonus = bon6 + (i - 600000) * 0.015; break;
//	case 10:bonus = bon10 + (i - 1000000) * 0.01; break;
//	}
//	printf("奖金是：%10.2f\n", bonus);
//	return 0;
//}

//11

//int main()
//{
//	int a, b, c, d,t;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a > b)
//		t = a, a = b, b = t;
//	if (a > c)
//		t = a, a = c, c = t;
//	if (a > d)
//		t = a, a = d, d = t;
//	if (b > c)
//		t = b, b = c, c = t;
//	if (b > d)
//		t = b, b = d, d = t;
//	if (c > d)
//		t = c, c = d, d = t;
//	printf("%d %d %d %d",a,b,c,d);
//	return 0;
//}

//12

//int main()
//{
//	int h = 10;
//	float x1 = 2, y1 = 2,x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2, x, y, d1, d2, d3, d4;
//	scanf("%f,%f", &x, &y);
//	d1 =sqrt( (x - x4) * (x - x4) + (y - y4) * (y - y4));
//	d2 =sqrt( (x - x1) * (x - x1) + (y - y1) * (y - y4));
//	d3 =sqrt( (x - x2) * (x - x2) + (y - y2) * (y - y2));
//	d4 =sqrt( (x - x3) * (x - x3) + (y - y3) * (y - y3));
//	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)
//		h = 0;
//	printf("该点的高度为：%d\n", h);
//	return 0;
//}
//存疑

//第五章

//3

//int main()
//{
//	int p, r, n, m, temp;
//	scanf("%d,%d", &n, &m);
//	if (n < m)
//	{
//		temp = n;
//		n = m;
//		m = temp;
//	}
//	p = n * m;
//	while (m != 0)
//	{
//		r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("它们的最大公约数为：%d\n", n);
//	printf("它们的最小公倍数为：%d\n", p / n);
//	return 0;
//}

//4

//int main()
//{
//	char c;
//	int letters = 0, space = 0, digit = 0, other = 0;
//	printf("请输入一行字符：\n");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n", letters, space, digit, other);
//	return 0;
//}

//5

//int main()
//{
//	int a, n, i = 1, sn = 0, tn = 0;
//	printf("a,n=:");
//	scanf("%d,%d", &a, &n);
//	while (i <= n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		++i;
//	}
//	printf("a+aa+aaa+...=%d\n", sn);
//	return 0;
//}

//6

//int main()
//{
//	double s = 0, t = 1;
//	int n;
//	for (n = 1; n <= 20; n++)
//	{
//		t = t * n;
//		s = s + t;
//	}
//	printf("1!+2!+3!+...+20!=%22.15e\n", s);
//	return 0;
//}

//7

//int main()
//{
//	int n1 = 100, n2 = 50, n3 = 10;
//	double k, s1 = 0, s2 = 0, s3 = 0;
//	for (k = 1; k <= n1; k++)
//		s1 = s1 + k;
//	for (k = 1; k <= n2; k++)
//		s2 = s2 + k * k;
//	for (k = 1; k <= n3; k++)
//		s3 = s3 + 1 / k;
//	printf("sum=%15.6f\n", s1 + s2 + s3);
//	return 0;
//}

//8

//int main()
//{
//	int i, j, k, n;
//	printf("parcissus numbers are ");
//	for (n = 100; n < 1000; n++)
//	{
//		i = n / 100;
//		j = n / 10 - i * 10;
//		k = n % 10;
//		if (n == i * i * i + j * j * j + k * k * k)
//			printf("%d,", n);
//	}
//	printf("\n");
//	return 0;
//}

//9

//int main()
//{
//	int m, s, i;
//	for (m = 2; m < 1000; m++)
//	{
//		s = 0;
//		for (i = 1; i < m; i++)
//			if ((m % i) == 0)
//				s = s + i;
//		if (s == m)
//		{
//			printf("%d,its factors are ", m);
//			for (i = 1; i < m; i++)
//				if (m % i == 0)
//					printf("%d", i);
//			printf("\n");
//		}
//	}
//	return 0;
//}

//10

//int main()
//{
//	int i,n = 20;
//	double a = 2, b = 1, s = 0, t;
//	for (i = 1; i <= n; i++)
//	{
//		s = s + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("sum=%16.10f\n", s);
//	return 0;
//}

//11

//int main()
//{
//	double sn = 100, hn = sn / 2;
//	int n;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;
//		hn = hn / 2;
//	}
//	printf("第10次落地时共经过%f米\n", sn);
//	printf("第10次反弹%f米\n", hn);
//	return 0;
//}

//12

//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
//	printf("total=%d\n", x1);
//	return 0;
//}

//13

//int main()
//{
//	float a, x0, x1;
//	printf("enter a positive number:");
//	scanf("%f", &a);
//	x0 = a / 2;
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x0 - x1) >= 1e-5);
//	printf("The square root of %5.2f  is %8.5f\n", a, x1);
//	return 0;
//}

//14

//int main()
//{
//	double x1, x0, f, f1;
//	x1 = 1.5;
//	do
//	{
//		x0 = x1;
//		f = ((2 * x0 - 4) * x0 + 3) * x0 - 6;
//		f1 = (6 * x0 - 8) * x0 + 3;
//		x1 = x0 - f / f1;
//	} while (fabs(x1 - x0) >= 1e-5);
//	printf("The root of equation is %5.2f\n", x1);
//	return 0;
//}

//15

//int main()
//{
//	float x0, x1, x2, fx0, fx1, fx2;
//	do
//	{
//		printf("enter x1 & x2:");
//		scanf("%f,%f", &x1, &x2);
//		fx1 = x1 * ((2 * x1 - 4) * x1 + 3) - 6;
//		fx2 = x2 * ((2 * x2 - 4) * x2 + 3) - 6;
//	} while (fx1 * fx2 > 0);
//	do
//	{
//		x0 = (x1 + x2) / 2;
//		fx0 = x0 * ((2 * x0 - 4) * x0 + 3) - 6;
//		if ((fx0 * fx1) < 0)
//		{
//			x2 = x0;
//			fx2 = fx0;
//		}
//		else
//		{
//			x1 = x0;
//			fx1 = fx0;
//		}
//	} while (fabs(fx0) >= 1e-5);
//	printf("x=%6.2f\n", x0);
//	return 0;
//}

//16

//int main()
//{
//	int i, j, k;
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 2 - i; j++)
//			printf(" ");
//		for (k = 0; k <= 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (k = 0; k <= 4 - 2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//17

//int main()
//{
//	char i, j, k;
//	for (i = 'x'; i <= 'z'; i++)
//		for (j = 'x'; j <= 'z'; j++)
//			if (i != j)
//				for (k = 'x'; k <= 'z'; k++)
//					if (i != 'x' && k != 'x' && k != 'z')
//						printf("A--%c\nB--%c\nC--%c\n", i, j, k);
//	return 0;
//}