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
	int size;//当前元素个数
	struct PeoInfo* date;//存放信息
	int capacity;//容量
}; 
//初始化通讯录
void InitContact(struct Contact* ps);
//增加通讯人
void AddContact(struct Contact* ps);
