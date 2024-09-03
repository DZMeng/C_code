#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//eg2.19

//int main()
//{
//	int sign = 1;
//	double deno = 2.0, sum = 1.0, term;
//	while (deno <= 100)
//	{
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno = deno + 1;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//eg3.1

//int main()
//{
//	int f = 64;
//	double c = (f - 32) * 5.0 / 9;
//	printf("%f\n", c);
//	return 0;
//}

//eg3.2

//int main()
//{
//	int p0 = 1000;
//	double r1=0.0036,r2=0.0225,r3=0.0198;
//	double p1 = p0 * (1 + r1);
//	double p2 = p0 * (1 + r2);
//	double p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
//	printf("%f\n", p1);
//	printf("%f\n", p2);
//	printf("%f\n", p3);
//	return 0;
//}//软件不同，不能完全适用书本的代码

//eg3.3

//int main()
//{
//	char c1;
//	int c2;//c2用字符型或者整型都可以
//	c1 = 'A';
//	c2 = c1 + 32;
//	printf("%d\n", c2);
//	printf("%c\n", c2);
//	return 0;
//}

//eg3.4

//#include<math.h>
//int main()
//{
//	double a, b, c, area, s;
//	a = 3.67;
//	b = 5.43;
//	c = 6.21;
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("a=%f\tb=%f\tc=%f\n", a, b, c);
//	printf("area=%f\n", area);
//	return 0;
//}

//eg4.1

//int main()
//{
//	double a, b, c, disc, x1, x2,p,q;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	disc = b * b - (4 * a * c);
//	if (disc < 0)
//		printf("This equation hasn't real roots\n");
//	else
//	{
//		p = -b / (2.0 * a);
//		q = sqrt(disc) / (2.0 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("real roots:\nx1=%7.2f\nx2=%7.2f\n",x1, x2);
//	}
//	return 0;
//}

//eg4.4

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
//	printf("%c\n", ch);
//	return 0;
//}

//eg4.5

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x >= 0)
//		if (x > 0)
//			y = 1;
//		else
//			y = 0;
//	else
//		y = -1;
//	printf("x=%d,y=%d\n",x,y);
//	return 0;
//}

//eg4.6

//int main()
//{
//	char grade;
//	scanf("%c", &grade);
//	printf("Your score:");
//	switch (grade)
//	{
//	case'A':printf("85~100\n"); break;
//	case'B': printf("70~84\n"); break;
//	case'C': printf("60~69\n"); break;
//	case'D': printf("<60\n"); break;
//	default:printf("enter data error!\n");
//	}
//	return 0;
//}

//eg4.7

//int main()
//{
//	void action1(int,int), action2(int,int);
//	char ch;
//	int a = 15, b = 23;
//	ch = getchar();
//	switch (ch)
//	{
//	case'a':
//	case'A':action1(a, b); break;
//	case'b':
//	case'B':action2(a, b); break;
//	default:putchar('\n');
//	}
//	return 0;
//}
//void action1(int x, int y)
//{
//	printf("x+y=%d\n", x + y);
//}
//void action2(int x, int y)
//{
//	printf("x*y=%d\n", x * y);
//}

//eg4.8

//int main()
//{
//	int year, leap;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		leap = 1;
//	else
//		leap = 0;
//	if (leap)
//		printf("%d is", year);
//	else
//		printf("%d is not", year);
//	printf(" a leap year.\n");
//	return 0;
//}

//eg4.9

//int main()
//{
//	double a, b, c, disc, x1, x2, realpart, imagpart;
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	printf("This equation ");
//	if (fabs(a) <= 1e-6)
//		printf("is not a quadratic\n");
//	else
//	{
//		disc = b * b - 4 * a * c;
//		if (fabs(disc) <= 1e-6)
//			printf("has two equal roots:%8.4f\n", -b / (2 * a));
//		else
//			if (disc > 1e-6)
//			{
//				x1 = (-b + sqrt(disc)) / (2 * a);
//				x2 = (-b - sqrt(disc)) / (2 * a);
//				printf("has distinct real roots:%8.4f and %8.4f\n", x1, x2);
//			}
//			else
//			{
//				realpart = -b / (a * 2);
//				imagpart = sqrt(-disc) / (2 * a);
//				printf("has complex roots:\n");
//				printf("%8.4f+%8.4fi\n", realpart, imagpart);
//				printf("%8.4f-%8.4fi\n", realpart, imagpart);
//			}
//	}
//	return 0;
//}

//eg4.10

//int main()
//{
//	int c, s;
//	float price, weight, discount, freight;
//	scanf("%f,%f,%d", &price, &weight, &s);
//	if (s >= 3000)
//		c = 12;
//	else
//		c = s / 250;
//	switch (c)
//	{
//	case 0:discount = 0; break;
//	case 1:discount = 2; break;
//	case 2:
//	case 3:discount = 5; break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:discount = 8; break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:discount = 10; break;
//	case 12:discount = 15; break;
//	}
//	freight = price * weight * s * (1 - discount / 100);
//	printf("freight=%10.2f\n", freight);
//	return 0;
//}

//eg5.2

//int main()
//{
//	int i = 1, sum = 0;
//	do
//	{
//		sum = sum + i;
//		i++;
//	} while (i <= 100);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//eg5.3（比较do...while和while循环的差别）

//int main()
//{
//	int i, sum = 0;
//	scanf("%d", &i);//输入一个数到i
//	//do//do...while循环
//	//{
//	//	sum = sum + i;
//	//	i++;
//	//} while (i <= 10);
//	//while (i <= 10)//while循环
//	//{
//	//	sum = sum + i;
//	//	i++;
//	//}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//eg5.4

//int main()
//{
//	float amount, aver, total;
//	int i;
//	for (i = 1, total = 0; i <= 1000; i++)
//	{
//		printf("Please enter amount:");
//		scanf("%f", &amount);
//		total = total + amount;
//		if (total >= 100000)
//			break;
//	}
//	aver = total / i;
//	printf("num=%d\naver=%10.2f\n", i, aver);
//	return 0;
//}

//eg5.5

//int main()
//{
//	int n;
//	for (n = 100; n <= 200; n++)
//	{
//		if (n % 3 == 0)
//			continue;
//		printf("%d\t", n);
//	}
//	printf("\n");
//	return 0;
//}

//eg5.6

//int main()
//{
//	int i, j, n = 0;
//	for(i=1;i<=4;i++)
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)
//				printf("\n");
//			//if (i == 3 && j == 1)break;//遇到3行1列时跳出循环
//			//if (i == 3 && j == 1)continue;//仅跳过3行1列，并自动向左补齐
//			printf("%d\t", i * j);
//		}
//	printf("\n");
//	return 0;
//}

//eg5.7

//int main()
//{
//	int sign = 1;
//	double pi = 0.0, n = 1.0, term = 1.0;
//	while (fabs(term) >= 1e-8)
//	{
//		pi = pi + term;
//		n = n + 2;
//		sign = -sign;
//		term = sign / n;
//	}
//	pi = pi * 4;
//	printf("%10.8f\n", pi);
//	return 0;
//}

//eg5.8

//int main()
//{
//	int f1 = 1, f2 = 1;
//	int i;
//	for (i = 1; i <=20 ; i++)
//	{
//		printf("%12d %12d", f1, f2);
//		if (i % 2 == 0)printf("\n");
//		f1 = f1 + f2;
//		f2 = f2 + f1;
//	}
//	return 0;
//}

//eg5.9

//int main()
//{
//	int n, i, k;
//	printf("Please enter an integer number:n=");
//	scanf("%d", &n);
//	k = sqrt(n);
//	for (i = 2; i <= k; i++)
//		if (n % i == 0)break;
//	if (i <= k)
//		printf("%d is not a prime number.\n", n);
//	else
//		printf("%d is a prime number.\n", n);
//	return 0;
//}

//eg5.10

//int main()
//{
//	int n, k, i, m=0;
//	for (n = 101; n <= 200; n=n + 2)
//	{
//		k = sqrt(n);
//		for (i = 2; i <= k; i++)
//			if (n % i == 0)break;
//		if (i >= k + 1)
//		{
//			printf("%d ", n);
//			m = m + 1;
//		}
//		if (m % 10 == 0)
//			printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//eg5.11

//int main()
//{
//	char c;
//	c = getchar();
//	while (c != '\n')
//	{
//		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//		{
//			if (c >= 'W' && c <= 'Z' || c >= 'w' && c <= 'z')
//				c = c - 32;
//			else
//				c = c + 4;
//		}
//		printf("%c", c);
//		c = getchar();
//	}
//	printf("\n");
//	return 0;
//}