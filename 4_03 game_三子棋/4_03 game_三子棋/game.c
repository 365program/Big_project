#define  _CRT_SECURE_NO_WARNINGS
#include  "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����1��ʾ�����Ѿ�����
//����0��ʾ����û��man
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
			for (j = 0; j < col; j++)//��ӡ������ a|b|c
			{
				printf(" %c ", board[i][j]);
				if (j < col - 1)
				printf("|");
				
			}
			printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)//��ӡ�����ٴ�ӡ�ָ��� ---|---|---
				{
					printf("---");
					if(j < col - 1)
					printf("|");
				}
				printf("\n");


			}
			//��ӡ�ָ���
			
		
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
		//�ж�x,y,����ĺϷ���
		printf("�����\n����������x,y ���ÿո����");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && 1 <= y && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�ø����Ѿ���ռ�ã�����������");


		}
		else
			printf("����Ƿ�������������");



	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������\n");
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