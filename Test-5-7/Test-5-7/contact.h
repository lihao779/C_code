#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define MAX_NAME 10
#define MAX_TELE 12
#define MAX_SEX 4
#define MAX_ADD 20
//姓名 年龄 地址 电话 性别 
struct People
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	int age;
	char add[MAX_ADD];
};
struct contact
{
	struct People *date;
	int size;
	int dynatic;
};
enum list
{
	Exit,
	Add,
	Del,
	Search,
	Mod,
	Show,
	Sort
};

void Init(struct contact *con);
void Addcontact(struct contact* con);
void Showcontact(const struct contact* ps);
void Delcontact(struct contact* ps);
void Searchcontact(const struct contact* ps);
void Modcontact(struct contact* ps);
void Sortcontact(struct contact* ps);