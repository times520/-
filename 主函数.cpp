#include <stdio.h>
#include "标头.h"

void menu()
{
	printf("                    \n");
	printf("      1.start       \n");
	printf("      0.exit        \n");
	printf("                    \n");
}

void game()
{
	//创建数组存储雷的信息
	char boardmine [ROWS][COLS] = { 0 };//内部雷位置信息存放
	char boardshow [ROWS][COLS] = { 0 };//表现出来的推理数组与空格存放
	//创建棋盘
	Initboard(boardmine, ROWS, COLS, '0');
	Initboard(boardshow, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(boardmine, ROW, COL);
	DisplayBoard(boardshow, ROW, COL);
	//开始雷的布置
	SetMine(boardmine, ROW, COL);//随机派雷
	DisplayBoard(boardmine, ROW, COL);//观察SetMine是否实现
	//扫雷实现
	FindMine(boardmine, boardshow, ROW, COL);//
	
}

int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("请输入：>");
    	scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}