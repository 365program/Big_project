#define  _CRT_SECURE_NO_WARNINGS
#define MAX_NAME  15
#define MAX_ADDR  30
#define DEFAULT_SZ 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
	
};

 struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char addr[MAX_ADDR];
};

 struct Contact
{
	int size;//��ǰԪ�ظ���
	struct PeoInfo* date;//�����Ϣ
	int capacity;//����
}; 
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//����ͨѶ��
void AddContact(struct Contact* ps);
