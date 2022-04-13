#include "Contact.h"
//目标
//存放1000个好友信息
//（一）基本信息 1.名字 2.电话 3.性别 4.住址 5.年龄
//（二）增加好友信息
//（三）删除指定好友信息
//（四）查找指定好友信息
//（五）修改好友信息
//（六）打印好友信息

void menu()
{
	printf("********************************************\n");
	printf("******     1.add           2.del     *******\n");
	printf("******     3.search        4.modify  *******\n");
	printf("******     5.show          6.sort    *******\n");
	printf("******     0.exit                    *******\n");
	printf("********************************************\n");
	

	
}


int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入非法,请重新输入\n");
			break;

		}
	} while(1);
	return 0;
}

