#include <stdio.h>

//�߼���������ʹ���Լ�ע������
//int main()
//{
//	int k = 0, i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;   //��ʹ���߼���ʱ�����ֵ�һ���٣������������������㲻�ٽ���
//	//k = a++ || ++b || d++; //ʹ���߼���ʱ�����ֵ�һ���棬�����������������㲻�ٽ���
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

////���Ų�����
//int main()
//{
//	int a = 8, b = 9;
//	//����������
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

////�ṹ��ָ��ָ�������.��->
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct stu����ѧ������si������ʼ��
//	struct stu si = { "����",20,"1920205324" };
//	/*printf("%s\n", si.name);
//	printf("%d\n", si.age);
//	printf("%s\n", si.id);*/
//	struct stu* ps = &si;
//	//printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}
