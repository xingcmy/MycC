#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//#define �����ʶ������
#define MAX 10

//ö�ٳ��� enum
enum Sex
{
	MALE,  //ֵΪ 0
	FEMALE,   //ֵΪ 1
	SECRET    //ֵΪ 2
};

int mai() {

	{
		//const  ������ ���γ�����  
		const int num = 1;
		int a = 0;
		int b = 0;
		int c = 0;
		scanf("%d%d", &a, &b);
		c = a + b;
		printf("%d\n", c);
	}
	{
		//��˫�����������Ľ��ַ���   "abc"
		char arr1[] = "abc";    //  "abc"  ->  {'a','b','c','\0'}  \0 �ַ����Ľ�����־
		char arr2[] = { 'a','b','c'};
		printf("%s\n", arr1);   //��� abc
		printf("%s\n", arr2);  //��� abc������.....
		{
			//strlen �����ַ�������  ����\0����
			printf("%d\n", strlen(arr1));   // 3
			printf("%d\n", strlen(arr2));   //���ֵ
		}
	}
	return 0;
}