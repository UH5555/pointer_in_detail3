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

//int main()
//{
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
//
	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48 - 3 * 4 * 4 = 48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16 - a[0]相当于第一行作为一维数组的数组名，计算第一行的大小
	//printf("%d\n", sizeof(a[0] + 1));//4/8 - 第一行第二个元素的地址，a[0]此时是首元素的地址。
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 
	//printf("%d\n", sizeof(a + 1));//4 - a是首元素地址，二维数组的首元素是第一行，a+1是第二行的地址。
	//printf("%d\n", sizeof(*(a + 1)));//16  -   sizeof(a[1])计算第二行的大小，单位是字节。
	//printf("%d\n", sizeof(&a[0] + 1));//4 - 第二行的地址 
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算第二行的大小，单位是字节。
	//printf("%d\n", sizeof(*a));//16 - a是首元素地址，就是第一行的地址。
	//printf("%d\n", sizeof(a[3]));//16 - a[0]一样
	//return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//ptr - 数组的地址跳过了整个数组。
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//2,1
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1); // 0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//0x4,0x02000000
//	printf("hello!");
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;//int (*)[4] = int (*)[5]
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//-4
	//p[4][2] ----- *(*(p+4)+2)
	return 0;
}
