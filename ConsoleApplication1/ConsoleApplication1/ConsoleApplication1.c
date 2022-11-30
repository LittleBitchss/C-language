#include<stdio.h>
int main()
{
	int year, month, day;
	int sum;
	printf("please input year month day:\n");
	scanf_s("%d %d %d", &year, &month, &day);
	switch (month)
	{
	case 1:
		sum = day;
		break;
	case 2:
		sum = 31 + day;
		break;
	case 3:
		sum = 31 + 28 + day;
		break;
	case 4:
		sum = 31 + 28 + 31+ day;
		break;
	case 5:
		sum = 31 + 28 + 31 + 30 + day;
		break;
	case 6:
		sum = 31 + 28 + 31 + 30 + 31 +  day;
		break;
	case 7:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
		break;
	case 8:
		sum = 31 + 28 + 31 + 30 + 31 + 30 +31 + day;
		break;
	case 9:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 +day;
		break;
	case 10:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 +30 + day;
		break;
	case 11:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
		break;
	case 12:
		sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 +30 + day;
		break;
	default:
		sum = 0;
		printf("您输入的月份有误\n");
		break;
	}
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
		sum = sum + 1;
	}
	printf("%d %d %d 是一年当中的第 %d 天\n",year,month,day,sum);
	return 0;
}

/*int main()
{
	int i;
	int a, b, c;
	for (i = 0; i <= 999; i++) {
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c) {
			printf("i = %d\n", i);
		}
	}
	return 0;
}*/


/*int main()
{	
	int tmp;
	printf("test0000000000000000000\n");
	printf("test1111111111111111111\n");
	printf("test2222222222222222222\n");
	goto tmp;
	printf("test3333333333333333333\n");
	printf("test4444444444444444444\n");
	printf("test5555555555555555555\n");
	printf("test6666666666666666666\n");
	tmp;
	printf("test7777777777777777777\n");
	printf("test8888888888888888888\n");
	printf("test9999999999999999999\n");
	return 0;
}*/
/*
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d ",j,i,j*i);
		}
		printf(" \n");
	}
	return 0;
}*/
/*int main()
{
	float x = 0;
	int i = 0;
	x = 3.6f;
	i = (int)x;
	printf("i=%d\n", i);
	printf("x=%f\n", x);
	return 0;
}*/


/*#include <stdio.h>
int main()
{
	printf("%d\n", 5 / 2);
	printf("%lf\n", 5.0 / 2);
	int a = -8;
	unsigned int b = 7;
	if (a + b > 0) {
		printf("a+b>0\n");
	}
	else if (a + b < 0) {
		printf("a+b<0\n");
	}
	else {
		printf("a+b=0\n");
	}
	printf("a+b=%x\n",a+b);
	int x;
	float f = 5.8f;
	x = f;
	printf("a=%d\n", x);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char a = 'x';
	int b = 101;
	int c = 3.14f;
	double d = 1.23;
	int e = 61;
	float f = 0.0123f;
	double g = 123456;
	char* p = "hello world";
	printf("a = %c\n", a);
	printf("b = %d\n", b);
	printf("c = %f\n", c);
	printf("f = %lf\n", d);
	printf("e = %x\n", e);
	printf("f = %e\n", f);
	printf("g = %e\n", g);
	printf("p = %s\n", p);

	printf("**%3d**\n", 1);
	printf("**%-3d**\n", 1);
	printf("**%03d**\n", 1);
	printf("**%03d**\n", 1234);
	printf("**%5.2f**\n", 333323213.34322);
	return 0;
}*/
/*int main()
{
	char a = 'x';
	char b = 120;
	printf("%d", a);
	printf("%d", b);
	return 0;
}*/


/*#include<stdio.h>
typedef short int INT16;
int main()
{
	INT16 a = 0;
	printf("a = %d\n", a);
	return 0;
}*/

/*void fun(void) {
	int i;
	i = 4;
	printf("%d\n", i);
}*/
/*
int main() {
	char a;
	short int b;
	int c;
	long int d;
	float e = 3.8f;
	double f = 3.8;
	printf("sizeif(a) = %d\n", sizeof(a));
	printf("sizeif(b) = %d\n", sizeof(b));
	printf("sizeif(c) = %d\n", sizeof(c));
	printf("sizeif(d) = %d\n", sizeof(d));
	printf("sizeif(e) = %d\n", sizeof(e));
	printf("sizeif(f) = %d\n", sizeof(f));
}*/

/*int main() {
	char ch;
	//ch = 'a';
	ch = 97;
	printf("ch =%c\n", ch);
	return 0;
}*/
/*int main()
{
	int i;
	for (i = 0; i < 255; i++) {
		printf("%c  %d", i, i);
	}
	//printf("hello World\n");
	return 0;
}*/