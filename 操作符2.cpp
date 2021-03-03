#include<stdio.h>

//sizeof的使用注意事项
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s=a+5));
//	printf("%d\n", s);
//	return 0;
//}

//void test1(int arr[])//该函数取a数组的第一个数的地址，地址大小取决于电脑运算大小
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int a[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(ch));
//	test1(a);
//	test2(ch);
//	return 0;
//}



////按位取反
//int main()
//{
//	int a = 0;
//	//~按位取反
//	//00000000000000000000000000000000未取反的a  这个是补码运算，只是正数原码等于补码
//	//11111111111111111111111111111111取反后的a补码
//	//11111111111111111111111111111110反码
//	//10000000000000000000000000000001原码再输出
//	//-1
//	printf("%d\n", ~a);
//	return 0;
//} 

