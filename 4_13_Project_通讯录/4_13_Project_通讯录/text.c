#include "Contact.h"
//Ŀ��
//���1000��������Ϣ
//��һ��������Ϣ 1.���� 2.�绰 3.�Ա� 4.סַ 5.����
//���������Ӻ�����Ϣ
//������ɾ��ָ��������Ϣ
//���ģ�����ָ��������Ϣ
//���壩�޸ĺ�����Ϣ
//��������ӡ������Ϣ

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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("����Ƿ�,����������\n");
			break;

		}
	} while(1);
	return 0;
}

