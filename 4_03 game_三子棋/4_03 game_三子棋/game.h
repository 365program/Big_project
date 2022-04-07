#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROW  4
#define COL  4
//函数声明
void IntBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
//判断胜负
//玩家赢     ‘*’
//电脑赢     ‘#’
// 平局      ‘Q’
// 继续      ‘C’
//

