//测试三子棋游戏
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("***   1.play    0.exi   t***\n");
	printf("****************************\n");


}

void game()
{
	char ret = ' ';
	//需要一个数组来 存放下棋的信息
	char board[ROW][COL] = { 0 };//需要全部设置为空格
	//棋盘的初始化
	IntBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//判断电脑是否赢
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
	printf("平局\n");
	}
}



void text()
{
	srand((unsigned int)time(NULL));
	
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");

		}

	} while (input);

}



int main()
{
	
	text();

	return 0;
}