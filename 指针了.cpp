#include<stdio.h>

//int main()
//{
//	int a = 10;//在内存开辟空间存放a
//	int* p = &a;//&a对a取地址，使用&即取地址操作
//			//将a的地址放在p变量当中，p相当于一个指针变量
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc =(char*) &a;
//	printf("%p\n", pa);
//	*pc = 0;//这里只会使a的后面两个字节数发生改变
//	//11223344
//	//11223300
//	//而使用int类型就不会发生该情况
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//
//	printf("%p\n",&n);
//	printf("%p\n",pc);//pc是char类型加一
//	printf("%p\n",pc+1);//char大小为一个字节使用增加一
//	printf("%p\n",pi);//pi是int类型加一
//	printf("%p\n",pi+1);//int大小为四个字节使用时值增大四
//	return 0;
//}

//int main()
//{
//	int* p;//指针变量未初始化，默认随机值
//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (char*)arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++)=i;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}//程序中中间函数结束a失效，地址被释放
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}