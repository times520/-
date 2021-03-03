#include <stdio.h>

//逻辑操作符的使用以及注意事项
//int main()
//{
//	int k = 0, i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;   //在使用逻辑与时，出现第一个假，运算结束，后面的运算不再进行
//	//k = a++ || ++b || d++; //使用逻辑或时，出现第一个真，运算结束，后面的运算不再进行
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

////逗号操作符
//int main()
//{
//	int a = 8, b = 9;
//	//条件操作符
//	//int max = 0;
//	//a++;
//	//b++;
//	//max=a>b?a:b;
//	if (a++, b++, a > b)
//	{
//		printf("max=%d", a);
//	}
//	else
//	{
//		printf("max=%d", b);
//	}
//	return 0;
//}

////结构体指针指向操作符.和->
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct stu创建学生对象si，并初始化
//	struct stu si = { "张三",20,"1920205324" };
//	/*printf("%s\n", si.name);
//	printf("%d\n", si.age);
//	printf("%s\n", si.id);*/
//	struct stu* ps = &si;
//	//printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}
