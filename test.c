#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����������Ԫ�ص�ַ
//	// 1.sizeof���������� - ��������ʾ��������
//	// 2.&������ - ��������ʾ��������
//	//char arr[] = {'a','b','c','d','e','f'};
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7 - abcdef\0 - sizeof(arr)���������Ĵ�С��
//	//printf("%d\n", sizeof(arr + 0));//4/8 - ������ǵ�ַ�Ĵ�С - arr+0����Ԫ�ص�ַ
//	//printf("%d\n", sizeof(*arr));//1 - *arr����Ԫ�أ�sizeof��*arr��������Ԫ�صĴ�С
//	//printf("%d\n", sizeof(arr[1]));//1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])����ڶ���Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&arr));//4/8 - &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��4/8�ֽڡ�
//	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ��
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - &arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ��
//	printf("%d\n", strlen(arr));//6 - ������\0��
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err - strlen��ҪԪ�ص�ַ
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 - &arr ����ĵ�ַ - �����ָ�� char(*p)[7] = &arr��
//	printf("%d\n", strlen(&arr + 1));//���ֵ - ��һ������ġ�
//	printf("%d\n", strlen(&arr[0] + 1));//5 - �ӵڶ���Ԫ�صĵ�ַ��ʼ����
//	return 0;
//}

//int main()
//{
	//char* p = "abcdef";//a�ĵ�ַ�ŵ�p�����ˡ�
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5 - b�ĵ�ַ
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5 - b�ĵ�ַ
	//printf("%d\n", sizeof(p));//4/8 - ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4/8 - p+1 �õ�����b�ĵ�ַ��
	//printf("%d\n", sizeof(*p));//1 - *p�����ַ����ĵ�һ���ַ���
	//printf("%d\n", sizeof(p[0]));//1 - p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));//4/8 - ��ַ
	//printf("%d\n", sizeof(&p + 1));//4/8 - ��ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8 - ��ַ
//
	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48 - 3 * 4 * 4 = 48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16 - a[0]�൱�ڵ�һ����Ϊһά������������������һ�еĴ�С
	//printf("%d\n", sizeof(a[0] + 1));//4/8 - ��һ�еڶ���Ԫ�صĵ�ַ��a[0]��ʱ����Ԫ�صĵ�ַ��
	//printf("%d\n", sizeof(*(a[0] + 1)));//4 
	//printf("%d\n", sizeof(a + 1));//4 - a����Ԫ�ص�ַ����ά�������Ԫ���ǵ�һ�У�a+1�ǵڶ��еĵ�ַ��
	//printf("%d\n", sizeof(*(a + 1)));//16  -   sizeof(a[1])����ڶ��еĴ�С����λ���ֽڡ�
	//printf("%d\n", sizeof(&a[0] + 1));//4 - �ڶ��еĵ�ַ 
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16 - ����ڶ��еĴ�С����λ���ֽڡ�
	//printf("%d\n", sizeof(*a));//16 - a����Ԫ�ص�ַ�����ǵ�һ�еĵ�ַ��
	//printf("%d\n", sizeof(a[3]));//16 - a[0]һ��
	//return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//ptr - ����ĵ�ַ�������������顣
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ
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
