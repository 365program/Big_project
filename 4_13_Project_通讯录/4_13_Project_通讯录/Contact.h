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
//声明初始化数组函数
void InitContact(struct Contact* ps);
//添加一个通讯录对象
void AddContact(struct Contact* ps);
//打印通讯表
void ShowContact(struct Contact* ps);
//删除指定联系人
void DelContact(struct Contact* ps);
//查找指定联系人
void SearchContact(struct Contact* ps);
//修改联系人信息
void ModifyContact(const struct Contact* ps);


