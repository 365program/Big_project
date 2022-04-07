#define  _CRT_SECURE_NO_WARNINGS 
#include  "game.h"
 void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;

		}
	

	}


}

//    
//   1 2 3  
// 1 0 0 0
// 2 0 0 0
// 3 0 0 0
//

 void DisplayBoard(char board[ROWS][COLS], int row, int col)
 {
	  int i = 0;
	  int j = 0;
	  printf("  ");
	  for (j = 1; j <= col; j++)
	  {
		  printf("%d ", j);
	  }
	  printf("\n");
	  for (i = 1; i <= row; i++)
	  {
		  for (j = 1; j <= col;j++)
		  {
			  if (j == 1)
			  {
				  printf("%d ", i);
			  }
			  printf("%c ", board[i][j]);
		  }
		  printf("\n");


	  }
	     

 }


 void Displayboard(char board[ROWS][COLS], int row, int col)
 {
 }

 void SetMine(char board[ROWS][COLS], int row, int col)
 {
	 int count = EASY_COUNT;
	 while (count > 0)
	 {
		 int x = rand() % row + 1;
		 int y = rand() % col + 1;
		 if (board[x][y] == '0')
		 {
			 board[x][y] = '1';
			 count--;
		 }
	 }

 }

 void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
 {

	 int x = 0;
	 int y = 0;
	 int  count = 0;
	 int win = 0;
	 
	 while (1)
	 {
		 printf("请输入坐标(x,y)(用空格隔开):>");
		 scanf("%d%d", &x, &y);

		 if (x >= 1 && x <= row && y >= 1, y <= col)
		 {
			 if (mine[x][y] == '1')
			 {
				 printf("炸弹爆炸，你变成猪\n");
				 DisplayBoard(mine, ROW, COL);
				 break;
			 }
			 else//不是雷
			 {//计算x,y周围的雷
				 count = get_mine_count(mine, x, y);
				 show[x][y] = count + '0';
				 DisplayBoard(show, ROW, COL);
				 win++;
				 

			 }
		 }
		 else
		 {
			 printf("你输入的坐标有误，请重新输入\n");
		 }
		 if (win == row * col - EASY_COUNT )
		 {
			 printf("恭喜你成功了嘿嘿\n");
		 }
	 }
 }


 int get_mine_count(char mine[ROWS][COLS], int x, int y)
 {
	 int up = x - 1;
	 int down = x + 1;
	 int right = y + 1;
	 int left = y - 1;
	 int count = 0;
	 for (x = up; x <= down; x++)
	 {
		 for (y = left; y <= right; y++)
		 {
			 if (mine[x][y] == '1')
				 count++;
		 }
	 }
	 return count;
 }


 
