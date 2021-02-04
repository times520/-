#include"标头.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < rows; x++)
	{
		for (y = 0; y < cols; y++)
		{
			board[x][y] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%3d ", i);
	}
	printf("\n\n");
	for (i = 1; i <= row; i++)
	{
		printf("%3d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %3c", board[i][j]);
		}
		printf("\n\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int bomb = 0;

	for (bomb = 0; bomb < bombsum; bomb++)//sum在标头已经定义
	{
		i = rand() % row+1;
		j = rand() % col+1;
		if (board[i][j] == '0')
		{
			board[i][j] = '1';
		}
		else
		{
			bomb = bomb - 1;
		}
	}
}

int bomb_sum(char boardmine[ROWS][COLS], int x, int y)
{
	return boardmine[x - 1][y - 1] +
		boardmine[x - 1][y] +
		boardmine[x - 1][y + 1] +
		boardmine[x][y - 1] +
		boardmine[x][y + 1] +
		boardmine[x + 1][y - 1] +
		boardmine[x + 1][y] +
		boardmine[x + 1][y + 1] - 8 * '0';

	//int i = 0;
	//int j = 0;
	//int a = 0;
	//for (i = x - 1; i <= x + 1; i++)
	//{
	//	for (j = y - 1; j <= y + 1; j++)
	//	{
	//		a = a + boardmine[i][j]-'0';
	//	}
	//}
	//return a;
}

		//mine[x][y] = ' ';
		//for (i = x - 1; i <= x + 1; i++)
		//{
		//	for (j = y - 1; i <= y + 1; j++)
		//	{
		//		int bomb = bomb_sum(mine, i, j);
		//		show[i][j] = bomb;
		//		if (mine[x][y] != '0')
		//		{
		//			break;
		//		}
		//		Expand(mine, show, i, j);
		//	}
		//}
void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	
	int bomb = bomb_sum(mine, x, y);
	show[x][y] = bomb+'0';
	if (bomb == 0)
	{
		show[x][y] = ' ';
		if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '*'))
			Expand(mine, show, x - 1, y - 1);
		if ((x - 1) > 0 && (y) > 0 && (show[x - 1][y] == '*'))
			Expand(mine, show, x - 1, y);
		if ((x - 1) > 0 && (y + 1) > 0 && (show[x - 1][y + 1] == '*'))
			Expand(mine, show, x - 1, y + 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '*'))
			Expand(mine, show, x, y - 1);
		if ((x) > 0 && (y + 1) > 0 && (show[x][y + 1] == '*'))
			Expand(mine, show, x, y + 1);
		if ((x + 1) > 0 && (y - 1) > 0 && (show[x + 1][y - 1] == '*'))
			Expand(mine, show, x + 1, y - 1);
		if ((x + 1) > 0 && (y) > 0 && (show[x + 1][y] == '*'))
			Expand(mine, show, x + 1, y);
		if ((x + 1) > 0 && (y + 1) > 0 && (show[x + 1][y + 1] == '*'))
			Expand(mine, show, x + 1, y + 1);

	}
	else
	{
		show[x][y] = bomb+'0';
	}
}

void FindMine(char boardmine[ROWS][COLS], char boardshow[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	do
	{
		printf("请输入你选择的坐标:>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (boardmine[i][j] == '1')//踩雷
			{
				printf("游戏结束，你输了\n");
				DisplayBoard(boardmine, row, col);
				break;
			}
			else//未踩雷
			{
				//计算雷的个数
				//int bomb = bomb_sum(boardmine, i, j);
				//boardshow[i][j] = bomb;
				//DisplayBoard(boardshow, row, col);
				//拓展函数使‘0’周围的*改变
				Expand(boardmine, boardshow, i, j);
				DisplayBoard(boardshow, row, col);
			}
		}
		else
		{
			printf("坐标非法，重新输入");
		}
	} while (win < row * col - bombsum);
	if (win == row * col - bombsum)
	{
		printf("你赢了，恭喜你\n");
		DisplayBoard(boardmine, row, col);
	}
}
