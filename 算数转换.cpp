#include <stdio.h>
//int main()
//{
//	int a = 8, b = 9, c = 7;
//	int d = 2, e = 3, f = 5;
//	int num = 0;
//	num = a * b + c * d + e * f;//��������ʽ
//	//�ڸü���ʽ�м���˳�����������
//	//a*b->c*d->a*b+c*d->e*f->a*b+c*d+e*f
//	//a*b->c*d->e*f->a*b+c*d+e*f
//	//����������ܼ��㷢������
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int c = 1, a = 0;
//	a = c + --c;//������
//	//�ᷢ�����ּ������
//	//��һ��c��׼��������ڶ���--c
//	//����ڶ���--c�����һ��c���
//	printf("%d", a);
//	return 0;
//}

int fun()
{
	static int count = 1;
	//staticʹcount�ٴν���ú���ʱ�������ٴα�����
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	//��������
	//�Ǹ�fun��ִ�в���ȷ��
	printf("answer=%d", answer);
	return 0;
}