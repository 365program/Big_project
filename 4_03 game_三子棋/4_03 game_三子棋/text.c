//������������Ϸ
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
	//��Ҫһ�������� ����������Ϣ
	char board[ROW][COL] = { 0 };//��Ҫȫ������Ϊ�ո�
	//���̵ĳ�ʼ��
	IntBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//�жϵ����Ƿ�Ӯ
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
	printf("ƽ��\n");
	}
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
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");

		}

	} while (input);

}



int main()
{
	
	text();

	return 0;
}