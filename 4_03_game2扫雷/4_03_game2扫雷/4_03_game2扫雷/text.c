#define  _CRT_SECURE_NO_WARNINGS 
#include "game.h"




void game()
{
	//������ص�����
	char mine[ROWS][COLS] = { 0 };
	//����������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	////��ӡ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				printf("��Ϸ��ʼ\n");
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("�����������������\n");
				break;

		}
	} while (input);
}


int main()
{
	text();


	return 0;
}
