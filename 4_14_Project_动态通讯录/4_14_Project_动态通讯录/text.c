#include "Contact_Dynamic.h"


void menu()
{
	printf("**********************************\n");
	printf("******   1.add     2.del    ******\n");
	printf("******   3.search  4.modify ******\n");
	printf("******   5.show    6.sort   ******\n");
	printf("*************0.exit***************\n");
	printf("**********************************\n");

}





int main()
{
	struct Contact con;
	InitContact(&con);
	do
	{
		menu();
		int input = 0;
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		
		
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
			break;
		case EXIT:
			break;


		}
	} while (1);
	free(con.date);
	con.date = NULL;


	return 0;
}