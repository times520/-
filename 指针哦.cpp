#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//��ָ�룬NULL��������ʼ��ָ��͸�ָ�븳ֵ
//	return 0;
//}

//int main() 
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	return 0;
//}


//if (pa != NULL)
//{
//
//}�жϵ�ַ �Ƿ���ʹ��

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *p);
		p = p + 1;
	}
	return 0;
}