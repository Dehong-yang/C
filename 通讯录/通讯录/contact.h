#define _CRT_SECURE_NO_WARNINGS
#define MAX  1000
#define MAX_NAME  20
#define MAX_SEX   5
#define MAX_TELE  12
#define MAX_ADDR  30

#include<stdio.h>
#include<string.h>
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//通讯录的类型
struct Contact
{
	struct PeoInfo data[MAX]; // 存放1000个信息
	int size; //记录当前已经有的个数
};

//声明函数
InitContact(struct Contact* ps);
AddContact(struct Contact*ps);
ShowContact(const struct Contact*ps);
