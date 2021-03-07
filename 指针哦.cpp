#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//空指针，NULL—用来初始化指针和给指针赋值
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
//}判断地址 是否能使用

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