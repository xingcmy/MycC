#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//#define 定义标识符常量
#define MAX 10

//枚举常量 enum
enum Sex
{
	MALE,  //值为 0
	FEMALE,   //值为 1
	SECRET    //值为 2
};

int mai() {

	{
		//const  常属性 修饰常变量  
		const int num = 1;
		int a = 0;
		int b = 0;
		int c = 0;
		scanf("%d%d", &a, &b);
		c = a + b;
		printf("%d\n", c);
	}
	{
		//由双引号引起来的叫字符串   "abc"
		char arr1[] = "abc";    //  "abc"  ->  {'a','b','c','\0'}  \0 字符串的结束标志
		char arr2[] = { 'a','b','c'};
		printf("%s\n", arr1);   //输出 abc
		printf("%s\n", arr2);  //输出 abc烫烫烫.....
		{
			//strlen 计算字符串长度  查找\0结束
			printf("%d\n", strlen(arr1));   // 3
			printf("%d\n", strlen(arr2));   //随机值
		}
	}
	return 0;
}