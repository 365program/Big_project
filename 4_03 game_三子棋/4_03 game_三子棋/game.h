#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW  4
#define COL  4
//��������
void IntBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
//�ж�ʤ��
//���Ӯ     ��*��
//����Ӯ     ��#��
// ƽ��      ��Q��
// ����      ��C��
//

