#define _CRT_SECURE_ND_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
����Ŀ¼
	1�����泣��
	2��const���εĳ�����
	3��const���εĳ�����
	4��#define ����ı�ʶ������
	5��ö��
���δ���֪ʶ�㣺
	


���棺


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
	/*scanf�����ڵ���ʧ�ܵ�ʱ�򣬶�ȡʧ�ܵ�ʱ�򣬻᷵��EOF
	EOF: end of file �ļ���β
	
	*/
	int m = 0;
	while (scanf_s("%d", &m)!=EOF)/*��������ͨ��ѭ����ʵ��*/
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
	/*\130 ������ǰ�130���8��������ת����10���Ƶõ�88����Ϊascii��ֵ������ַ�*/
	printf("%c\n", '\130'); 

	printf("%d\n", strlen("c:\test\628\test.c"));
	/*\628 3������8���ƣ�\62��8���ƣ�ת����ֵ����127  as�룬���Բ���һ���ַ���
	\t ��һ���ַ���\t��ӡ������Ч������ռ�����ַ�
	*/
}
test07()
{
	/*strlen �����\0֮ǰ�ĸ���*/
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
	* 5��ö�ٳ���������
	ö�٣�--�о�
	�ձ��� Ů ����
	��ԭɫ��  ��ɫ  ��ɫ  ��ɫ
	���ڣ� 1 2 3 4 5 6 7
	������Ĭ�ϻ��ö�ٳ���һЩֵ
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
	/*5��ö�ٳ����Ķ���*/
	enum Sex s = MALE;
	printf("%d %d %d\n", RED, GREEN, BLUE);

}

#define M 100
test04()
{
	/*4��#define ����ı�ʶ������*/
	int a = M;
	int arr[M] = { 0 };
	printf("%d\n", a);
	return 0;
}
test03()
{
	/*3��const���εĳ�����
	���ʻ��Ǹ�������ֻ������cosnt����֮�����﷨���棬��Ҳ�޷���Num�����޸��ˣ�����
	�����ƾ߱��˳����ԣ�
	*/
	const int num = 10; 
	printf("%d\n", num);
	//num = 20;err
	printf("%d\n", num);

	int n = 10;
	//int arr[n] = { 0 };err ������Ҫ����;��ô���Ǽ���cosnt�أ�
	const int m = 100;//n �����ϻ��Ǳ�����ֻ�Ǿ��г���������
	//int arr[m] = { 0 };err ��Ȼ�������˵��m���Ǳ�����

	return 0;
}

test02()
{
	/*2��const���εĳ�����
		const��һ�����ԵĹؼ���*/
	int num = 10;
	printf("%d\n", num);
	num = 20;
	printf("%d\n", num);
}

test01()
{
	/*1�����泣��*/
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