#include <stdio.h>
#include"��ͷ.h"

void menu()
{
	printf("                          \n");
	printf("    1.start    0.exit     \n");
	printf("                          \n");
}
void game()
{
	char ret = 0;//ʤ���жϲ���
	//���鴢�����ݣ��ȴ�������
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//�������鶨��ո�
	InitBoard(board, ROW, COL);//�ն���ʵ�к���
	//���̴�ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж�����Ƿ�Ӯ
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�жϵ����Ƿ�Ӯ
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��1/0��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������ԣ�\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}