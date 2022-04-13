#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX         1000
#define MAX_NAME    20
#define MAX_SEX     5
#define MAX_TELE    12
#define MAX_ADDR    30

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInfo date[MAX];
	int size;
};

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	
};
//������ʼ�����麯��
void InitContact(struct Contact* ps);
//���һ��ͨѶ¼����
void AddContact(struct Contact* ps);
//��ӡͨѶ��
void ShowContact(struct Contact* ps);
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);
//����ָ����ϵ��
void SearchContact(struct Contact* ps);
//�޸���ϵ����Ϣ
void ModifyContact(const struct Contact* ps);


