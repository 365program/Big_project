#include "Contact_Dynamic.h"
void InitContact(struct Contact* ps)
{
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	ps->date = (struct PeoInfo*)malloc(sizeof(struct PeoInfo) * DEFAULT_SZ);
	if (ps->date == NULL)
	{
		return;
	}
	memset(ps->date, 0, sizeof(ps->date));

}

static void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		
		struct PeoInfo* ptr =(struct PeoInfo*)realloc(ps->date, sizeof(struct PeoInfo) * (ps->capacity+2));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity = ps->capacity + 2;
			printf("���ݳɹ�\n");
		}
		else
			printf("����ʧ��\n");
		
	}
}

void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
	printf("����������\n");
	scanf("%s", ps->date[ps->size].name);
    printf("����������\n");
	scanf("%d", &(ps->date[ps->size].age));
	printf("������סַ\n");
	scanf("%s", ps->date[ps->size].addr);
	ps->size++;
}