#define  _CRT_SECURE_NO_WARNINGS
#include  "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//返回1表示棋盘已经满了
//返回0表示棋盘没有man
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		int j = 0;	
	     for (j = 0; j < col; j++)
		{
			 if (board[i][j] == ' ')
			 {
				 return 0;
			 }
			

		 }
	}
	return 1;

}




void IntBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{	
			
			int j = 0;
			for (j = 0; j < col; j++)//打印行数据 a|b|c
			{
				printf(" %c ", board[i][j]);
				if (j < col - 1)
				printf("|");
				
			}
			printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)//打印数据再打印分割线 ---|---|---
				{
					printf("---");
					if(j < col - 1)
					printf("|");
				}
				printf("\n");


			}
			//打印分割行
			
		
		/*else
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/



	}
		 

}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	
	while (1)
	{
		//判断x,y,坐标的合法性
		printf("玩家走\n请输入坐标x,y 并用空格隔开");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && 1 <= y && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该格子已经被占用，请重新输入");


		}
		else
			printf("坐标非法，请重新输入");



	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		else
		{
			;
		}
	}


}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				;
			}
			else
				break;
        }
		if (j == row)
		{
			return '*';
		}
        
	}
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[j][i] == '*')
			{
				;
			}
			else
				break;
		}
		if (j == row)
		{
			return '*';
		}
	}

	for (i = 0; i < row; i++)
	{
		
		if (board[i][i] == '*')
		{
			;
		}
		else
		{
			break;
		}
		if (i == row - 1)
			return '*';

	}

	for (i = 0; i < row; i++)
	{

			if (board[i][2 - i] == '*')
			{
				;
			}
			else
			{
				break;
			}
		
		if (i == row - 1)
			return '*';

	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '#')
			{
				;
			}
			else
				break;
		}
		if (j == row )
		{
			return '#';
		}

	}
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[j][i] == '#')
			{
				;
			}
			else
				break;
		}
		if (j == row)
		{
			return '#';
		}
	}

	for (i = 0; i < row; i++)
	{

		if (board[i][i] == '#')
		{
			;
		}
		else
		{
			break;
		}
		if (i == row - 1)
			return '#';

	}

	for (i = 0; i < row; i++)
	{

		if (board[i][2 - i] == '#')
		{
			;
		}
		else
		{
			break;
		}

		if (i == row -1)
			return '#';

	}
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	else
		return 'C';


}