#include <stdio.h>
////算数操作符
//int main()
//{
//	int a = 9 / 2;
//	int b = 9 % 2;
//	double c = 9 / 2.0;//当其中任意数字为浮点数时除法结果也为浮点数
//	//double d = 9 % 2.0;取模不能用于浮点数
//	return 0;
//}

////移位操作符
//int main()
//{
//	int a = -1;
//	//>>——右移操作符
//	//移动二进制位数字
//	//int a=16——00000000000000000000000000010000
//	//二进制补码运算！！！
//	a=a >> 1;
//	printf("%d", a);
//	return 0;
//}

////位操作符
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d%d%d", c, d, e);
//	return 0;
//}

////异或法在面试题中的考察!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换两个数字的值
//	//且不能使用临时变量
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d", a, b);
//	return 0;
//}

//要知道一个数的二进制数有多少个一
//方法一，取模法
//int main() 
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int a = 0;
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	for (a=num; a>0; a=a/2)
//	{
//		if (a % 2 == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//方法二取模移位法
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int a = 1;
//	scanf("%d", &num);
//	while (a<num)
//	{
//		if ((num & a) == a)
//		{
//			count++;
//		}
//		a = a << 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//方法3最优解
//////int main()
//////{
//////	int num = 3;
//////	int i = 0;
//////	int count = 0;
//////	while (num)
//////	{
//////		count++;
//////		num = num & (num - 1);//目的是去掉num二进制数的最后一个一
//////	}
//////	printf("%d", count);
//////	return 0;
//////}


////复合赋值操作符
//int main()
//{
//	int a = 3;
//	a = a + 2;
//	printf("%d\n", a);
//	a += 2;
//	printf("%d\n", a);
//	return 0;
//}


////单目操作符-----!
//int main()
//{
//	int a = 0;
//	if (a)
//		printf("hhhh\n");
//	if (!a)
//		printf("oooo\n");
//
//	return 0;
//}

//
////&和*
//int main()
//{
//	int a = 3;
//	int* p = &a;//取地址操作符
//	*p = 2;//解引用操作符
//	printf("%d   %d    %p", *p, a, p);
//	return 0;
//}

//sizeof
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(arr));//40
	return 0;
}