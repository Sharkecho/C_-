#define _CRT_SECURE_ND_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
本章目录
	1、字面常量
	2、const修饰的常变量
	3、const修饰的常变量
	4、#define 定义的标识符常量
	5、枚举
本段代码知识点：
	


警告：


*/
 Compare(int a,int b)
{
    if(a>b)
    {
       printf("%d > %d\n",a,b);
    }
    else if(a=b)
    {
        printf("%d = %d\n",a,b);
    }
    else
    {
       printf("%d < %d\n",a,b);  
    }
}
test14()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d\n", &a, &b);
	printf("%d,%d", a / b, a % b);
}
test13()
{
	printf("name----age----sex\n");

	printf("---------------------\n");
	printf("JACK----18----MAN");
}
test12()
{
	/*scanf函数在调用失败的时候，读取失败的时候，会返回EOF
	EOF: end of file 文件结尾
	
	*/
	int m = 0;
	while (scanf_s("%d", &m)!=EOF)/*多组输入通过循环来实现*/
	{
		if (m >= 140)
			printf("Genius\n");
	}
}
test11()
{
	int a, b;

	scanf_s("%d %d",&a,&b);
	
	if (a > b)
		printf("a=%d", a);
	else
		printf("b=%d", b);

}
//test10()
//{
//	int m;
//	if(1<=m<=100,000)
//		scanf("%d", &m);
//	if(m==5)
//}
test09()
{
	printf("%d\n", 7 / 3);
	printf("%f\n", 7 / 3.0);
	
}
test08()
{
	printf("abcdef\n");
	printf("%c\n", '\130');
	/*\130 代表的是把130这个8进制数字转换成10进制得到88，作为ascii码值代表的字符*/
	printf("%c\n", '\130'); 

	printf("%d\n", strlen("c:\test\628\test.c"));
	/*\628 3个不是8进制，\62是8进制，转出的值大于127  as码，所以不是一个字符，
	\t 算一个字符，\t打印出来的效果，是占几个字符
	*/
}
test07()
{
	/*strlen 求的是\0之前的个数*/
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	return 0;
}
test06()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
test05()
{
	/*
	* 5、枚举常量的声明
	枚举：--列举
	姓别：男 女 保密
	三原色：  红色  绿色  蓝色
	星期： 1 2 3 4 5 6 7
	编译器默认会给枚举常量一些值
	*/
	enum Sex
	{
		MALE,
		FEALE,
		SECRET
	};
	enum Color
	{
		RED,
		GREEN,
		BLUE
	};
	/*5、枚举常量的定义*/
	enum Sex s = MALE;
	printf("%d %d %d\n", RED, GREEN, BLUE);

}

#define M 100
test04()
{
	/*4、#define 定义的标识符常量*/
	int a = M;
	int arr[M] = { 0 };
	printf("%d\n", a);
	return 0;
}
test03()
{
	/*3、const修饰的常变量
	本质还是个变量，只不过被cosnt修饰之后在语法层面，再也无法对Num进行修改了，所以
	就类似具备了常属性；
	*/
	const int num = 10; 
	printf("%d\n", num);
	//num = 20;err
	printf("%d\n", num);

	int n = 10;
	//int arr[n] = { 0 };err 这里需要常量;那么我们加上cosnt呢？
	const int m = 100;//n 本质上还是变量；只是具有常量的属性
	//int arr[m] = { 0 };err 依然报错，这就说明m不是变量，

	return 0;
}

test02()
{
	/*2、const修饰的常变量
		const是一个语言的关键字*/
	int num = 10;
	printf("%d\n", num);
	num = 20;
	printf("%d\n", num);
}

test01()
{
	/*1、字面常量*/
	20;
	3.14;
	"abdef";
	int a = 10;
	char ch = 'w';
}
int main(void)
{
	//test05();
	//test06();
	//test07();
	//test08();
	//test11();
	//test12();
	int a = 0;
	int b = 0;
	while (scanf_s("%d %d\n", &a, &b) != 0)
	{

		Compare(a, b);
	}
	system("pause");
	return EXIT_SUCCESS;
}