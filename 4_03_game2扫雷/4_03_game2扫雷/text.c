#define  _CRT_SECURE_NO_WARNINGS 
#include "game.h"




void game()
{
	//雷所埋藏的数组
	char mine[ROWS][COLS] = { 0 };
	//玩家玩的数组
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	////打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	
	FindMine(mine, show, ROW, COL);

	

}

void menu()
{
	printf("********************\n");
	printf("** 1.play  2.exit **\n");
	printf("********************\n");

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
		switch(input)
		{
		case 1:
				printf("游戏开始\n");
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("输入错误，请重新输入\n");
				break;

		}
	} while (input);
}


int main()
{
	text();


	return 0;
}
