#include <stdio.h>
//int main()
//{
//	int a = 8, b = 9, c = 7;
//	int d = 2, e = 3, f = 5;
//	int num = 0;
//	num = a * b + c * d + e * f;//有问题表达式
//	//在该计算式中计算顺序有两种情况
//	//a*b->c*d->a*b+c*d->e*f->a*b+c*d+e*f
//	//a*b->c*d->e*f->a*b+c*d+e*f
//	//存在歧义可能计算发生错误
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int c = 1, a = 0;
//	a = c + --c;//有歧义
//	//会发生两种计算情况
//	//第一个c先准备好再算第二个--c
//	//先算第二个--c再与第一个c相加
//	printf("%d", a);
//	return 0;
//}

int fun()
{
	static int count = 1;
	//static使count再次进入该函数时，不会再次被定义
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	//存在歧义
	//那个fun先执行不能确定
	printf("answer=%d", answer);
	return 0;
}