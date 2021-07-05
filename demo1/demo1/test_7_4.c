#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {
	//char ch = 0;

	////ctrl + Z  EOF
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	{
		char ch1 = 0;
		char ch;
		int ret = 0;
		scanf("%s\n", &ch1);
		putchar(ch1);
		while ((ch = getchar()) != '\n')
		{
			;
		}
		ret = ch;
		printf("%d\n", ret);
	}
	return 0;
}