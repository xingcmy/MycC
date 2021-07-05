#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>

void main() {
	char arr1[] = "welcome to xingcmy!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	strcmp(arr1, arr2);
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		printf("%s\n", arr2);
		left++;
		if (left > right)
			break;
		Sleep(1000);
		//system("cls");
	}
}