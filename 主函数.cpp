#include <stdio.h>
#include "��ͷ.h"

void menu()
{
	printf("                    \n");
	printf("      1.start       \n");
	printf("      0.exit        \n");
	printf("                    \n");
}

void game()
{
	//��������洢�׵���Ϣ
	char boardmine [ROWS][COLS] = { 0 };//�ڲ���λ����Ϣ���
	char boardshow [ROWS][COLS] = { 0 };//���ֳ���������������ո���
	//��������
	Initboard(boardmine, ROWS, COLS, '0');
	Initboard(boardshow, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(boardmine, ROW, COL);
	DisplayBoard(boardshow, ROW, COL);
	//��ʼ�׵Ĳ���
	SetMine(boardmine, ROW, COL);//�������
	DisplayBoard(boardmine, ROW, COL);//�۲�SetMine�Ƿ�ʵ��
	//ɨ��ʵ��
	FindMine(boardmine, boardshow, ROW, COL);//
	
}

int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("�����룺>");
    	scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}