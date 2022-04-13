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
		printf("�б�����,�޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", &ps->date[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰����:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ͥסַ:>");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-15s\t%-20s\n",
			"����", 
			"����", 
			"�Ա�", 
			"�绰", 
			"סַ");
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
	//����Ҫɾ������λ��
	//ɾ��
	//ƽ��
	
	printf("��������Ҫɾ������ϵ��:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(struct Contact* ps)
{
	printf("��������Ҫ���ҵ���ϵ��:>");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-10s\t%-10d\t%-10s\t%-15s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸���Ϣ����ϵ��");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("���޴���");
	}
	else
	{
		int i = pos;
		printf("%-10s\t%-10s\t%-10s\t%-15s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-10s\t %-10d\t %-10s\t %-15s\t %-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
			printf("�޸����\n");
		
	}
	
}
