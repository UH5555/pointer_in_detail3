#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//数组名是首元素地址
//	// 1.sizeof（数组名） - 数组名表示整个数组
//	// 2.&数组名 - 数组名表示整个数组
//	//char arr[] = {'a','b','c','d','e','f'};
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7 - abcdef\0 - sizeof(arr)计算的数组的大小。
//	//printf("%d\n", sizeof(arr + 0));//4/8 - 计算的是地址的大小 - arr+0是首元素地址
//	//printf("%d\n", sizeof(*arr));//1 - *arr是首元素，sizeof（*arr）计算首元素的大小
//	//printf("%d\n", sizeof(arr[1]));//1 arr[1]是第二个元素，sizeof(arr[1])计算第二个元素的大小
//	//printf("%d\n", sizeof(&arr));//4/8 - &arr虽然是数组的地址，但也是地址，4/8字节。
//	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1是跳过整个数组后的地址，但也是地址。
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0] + 1是第二个元素的地址。
//	printf("%d\n", strlen(arr));//6 - 不计算\0。
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err - strlen需要元素地址
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 - &arr 数组的地址 - 数组的指针 char(*p)[7] = &arr。
//	printf("%d\n", strlen(&arr + 1));//随机值 - 下一个数组的。
//	printf("%d\n", strlen(&arr[0] + 1));//5 - 从第二个元素的地址开始数。
//	return 0;
//}

int main()
{
	//char* p = "abcdef";//a的地址放到p里面了。
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5 - b的地址
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5 - b的地址
	//printf("%d\n", sizeof(p));//4/8 - 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//4/8 - p+1 得到的是b的地址。
	//printf("%d\n", sizeof(*p));//1 - *p就是字符串的第一个字符。
	//printf("%d\n", sizeof(p[0]));//1 - p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));//4/8 - 地址
	//printf("%d\n", sizeof(&p + 1));//4/8 - 地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 - 地址

	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	return 0;
}