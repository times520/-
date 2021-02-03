#include <stdio.h>
#include"标头.h"

void menu()
{
	printf("                          \n");
	printf("    1.start    0.exit     \n");
	printf("                          \n");
}
void game()
{
	char ret = 0;//胜负判断参数
	//数组储存数据，先创建数组
	char board[ROW][COL] = { 0 };//全部空格
	//进行数组定义空格
	InitBoard(board, ROW, COL);//空定义实行函数
	//棋盘打印函数
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断玩家是否赢
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断电脑是否赢
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择1/0：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重试：\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}