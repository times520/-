#include <stdio.h>
////����������
//int main()
//{
//	int a = 9 / 2;
//	int b = 9 % 2;
//	double c = 9 / 2.0;//��������������Ϊ������ʱ�������ҲΪ������
//	//double d = 9 % 2.0;ȡģ�������ڸ�����
//	return 0;
//}

////��λ������
//int main()
//{
//	int a = -1;
//	//>>�������Ʋ�����
//	//�ƶ�������λ����
//	//int a=16����00000000000000000000000000010000
//	//�����Ʋ������㣡����
//	a=a >> 1;
//	printf("%d", a);
//	return 0;
//}

////λ������
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

////������������еĿ���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�����������ֵ�ֵ
//	//�Ҳ���ʹ����ʱ����
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d", a, b);
//	return 0;
//}

//Ҫ֪��һ�����Ķ��������ж��ٸ�һ
//����һ��ȡģ��
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
//������ȡģ��λ��
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
//����3���Ž�
//////int main()
//////{
//////	int num = 3;
//////	int i = 0;
//////	int count = 0;
//////	while (num)
//////	{
//////		count++;
//////		num = num & (num - 1);//Ŀ����ȥ��num�������������һ��һ
//////	}
//////	printf("%d", count);
//////	return 0;
//////}


////���ϸ�ֵ������
//int main()
//{
//	int a = 3;
//	a = a + 2;
//	printf("%d\n", a);
//	a += 2;
//	printf("%d\n", a);
//	return 0;
//}


////��Ŀ������-----!
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
////&��*
//int main()
//{
//	int a = 3;
//	int* p = &a;//ȡ��ַ������
//	*p = 2;//�����ò�����
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