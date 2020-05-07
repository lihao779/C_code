#include"contact.h"
int Findname(struct contact* ps,char* name)
{
	//查找这个人
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(name, ps->date[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Init(struct contact *con)
{
	con->size = 0;
	con->date = (struct People*)malloc(sizeof(struct People) * 3);
	con->dynatic = 3;
}
int Compare(struct contact* con)
{
	if (con->dynatic > con->size)
		return 0;
	return 1;
}
//void Check(struct contact* con)
//{
//	if (con->dynatic == con->size)
//	{
//		struct People* str = (struct People*)realloc(con->date, sizeof(struct People)*(con->dynatic + 2));
//		if (str != NULL)
//		{
//			con->date = str;
//			con->dynatic += 2;
//			printf("扩容成功\n");
//			
//		}
//		else
//			printf("扩容失败\n");
//	}
//}
void Addcontact(struct contact* con)
{
	if (1 == Compare(con))//满了返回1 不满返回0；
	{
		//扩容
		struct People* str = (struct People*)realloc(con->date, sizeof(struct People)*(con->dynatic + 2));
		if (str != NULL)
		{
			con->date = str;
			con->dynatic += 2;
			printf("扩容成功\n");
		}
	}
	//Check(&con);
	
		printf("请输入姓名\n");
		scanf("%s", con->date[con->size].name);
		printf("请输入电话\n");
		scanf("%s", con->date[con->size].tele);
		printf("请输入年龄\n");
		scanf("%d", &con->date[con->size].age);
		printf("请输入性别\n");
		scanf("%s", con->date[con->size].sex);
		printf("请输入住址\n");
		scanf("%s", con->date[con->size].add);
		con->size++;
		printf("添加成功\n");
	
	
}
void Showcontact(const struct contact* ps)
{
	if (ps->size == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%-10s %-20s %-10s %-10s %-20s\n", "姓名", "电话", "年龄", "性别", "住址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s %-20s %-10d %-10s %-20s",
				ps->date[i].name,
				ps->date[i].tele,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].add);
			printf("\n");
		}
	}
}
void Delcontact( struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的姓名：>");
	scanf("%s", name);
	int ret = Findname(ps, name);//找到返回下标 找不到返回-1

	//删除这个人
	if (ret == -1)
		printf("这个人不存在\n");
	else
	{
		for (; ret <ps->size-1 ; ret++)
		{
			ps->date[ret] = ps->date[ret + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void Searchcontact(const struct contact* ps)
{
	printf("请输入你需要搜索的人的名字：>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = Findname(ps, name);
	//打印
	if (ret == -1)
		printf("这个人不存在\n");
	else
	{
		printf("%-10s %-20s %-10s %-10s %-20s\n", "姓名", "电话", "年龄", "性别", "住址");
		int i = ret;
			printf("%-10s %-20s %-10d %-10s %-20s",
				ps->date[i].name,
				ps->date[i].tele,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].add);
			printf("\n");
	}
}
void Modcontact(struct contact* ps)
{
	printf("请输入你需要修改的人的名字：>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = Findname(ps, name);
	//打印
	if (ret == -1)
		printf("这个人不存在\n");
	else
	{
		int i = ret;
		printf("请输入姓名\n");
		scanf("%s", ps->date[i].name);
		printf("请输入电话\n");
		scanf("%s", ps->date[i].tele);
		printf("请输入年龄\n");
		scanf("%d", &ps->date[i].age);
		printf("请输入性别\n");
		scanf("%s", ps->date[i].sex);
		printf("请输入住址\n");
		scanf("%s", ps->date[i].add);
		printf("修改成功\n");
	}
}
void Sortcontact(struct contact* ps)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			//比较
			if (1 == strcmp(ps->date[i].name, ps->date[j + 1].name))
			{
				struct People tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}