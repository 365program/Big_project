#include "Contact.h"
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->date[i].name, name) == 0)
		{
			break;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
	return i;
}
void InitContact(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if ((ps->size) == MAX)
	{
		printf("列表已满,无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", &ps->date[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话号码:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入家庭住址:>");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-15s\t%-20s\n",
			"名字", 
			"年龄", 
			"性别", 
			"电话", 
			"住址");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-10d\t%-10s\t%-15s\t%-20s\n",
				ps->date[i].name,
		        ps->date[i].age,
				ps->date[i].sex ,
				ps->date[i].tele,
				ps->date[i].addr);
		}
	}

}

void DelContact(struct Contact* ps)
{
	//查找要删除的人位置
	//删除
	//平移
	
	printf("请输入你要删除的联系人:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(struct Contact* ps)
{
	printf("请输入你要查找的联系人:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-10s\t%-10d\t%-10s\t%-15s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t %-10d\t %-10s\t %-15s\t %-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
		}

	}
}

void ModifyContact(const struct Contact* ps)
{
	printf("请输入要修改信息的联系人");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("查无此人");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-10s\t%-10s\t%-15s\t%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-10s\t %-10d\t %-10s\t %-15s\t %-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
			printf("修改完成\n");
		
	}
	
}
