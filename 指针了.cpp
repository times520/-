#include<stdio.h>

//int main()
//{
//	int a = 10;//���ڴ濪�ٿռ���a
//	int* p = &a;//&a��aȡ��ַ��ʹ��&��ȡ��ַ����
//			//��a�ĵ�ַ����p�������У�p�൱��һ��ָ�����
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
//	*pc = 0;//����ֻ��ʹa�ĺ��������ֽ��������ı�
//	//11223344
//	//11223300
//	//��ʹ��int���;Ͳ��ᷢ�������
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
//	printf("%p\n",pc);//pc��char���ͼ�һ
//	printf("%p\n",pc+1);//char��СΪһ���ֽ�ʹ������һ
//	printf("%p\n",pi);//pi��int���ͼ�һ
//	printf("%p\n",pi+1);//int��СΪ�ĸ��ֽ�ʹ��ʱֵ������
//	return 0;
//}

//int main()
//{
//	int* p;//ָ�����δ��ʼ����Ĭ�����ֵ
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
//}//�������м亯������aʧЧ����ַ���ͷ�
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}