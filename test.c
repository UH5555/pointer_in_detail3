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

int main()
{
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

	//��ά����
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