#include"contact.h"
int Findname(struct contact* ps,char* name)
{
	//���������
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
//			printf("���ݳɹ�\n");
//			
//		}
//		else
//			printf("����ʧ��\n");
//	}
//}
void Addcontact(struct contact* con)
{
	if (1 == Compare(con))//���˷���1 ��������0��
	{
		//����
		struct People* str = (struct People*)realloc(con->date, sizeof(struct People)*(con->dynatic + 2));
		if (str != NULL)
		{
			con->date = str;
			con->dynatic += 2;
			printf("���ݳɹ�\n");
		}
	}
	//Check(&con);
	
		printf("����������\n");
		scanf("%s", con->date[con->size].name);
		printf("������绰\n");
		scanf("%s", con->date[con->size].tele);
		printf("����������\n");
		scanf("%d", &con->date[con->size].age);
		printf("�������Ա�\n");
		scanf("%s", con->date[con->size].sex);
		printf("������סַ\n");
		scanf("%s", con->date[con->size].add);
		con->size++;
		printf("��ӳɹ�\n");
	
	
}
void Showcontact(const struct contact* ps)
{
	if (ps->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-10s %-20s %-10s %-10s %-20s\n", "����", "�绰", "����", "�Ա�", "סַ");
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
	printf("������Ҫɾ���˵�������>");
	scanf("%s", name);
	int ret = Findname(ps, name);//�ҵ������±� �Ҳ�������-1

	//ɾ�������
	if (ret == -1)
		printf("����˲�����\n");
	else
	{
		for (; ret <ps->size-1 ; ret++)
		{
			ps->date[ret] = ps->date[ret + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Searchcontact(const struct contact* ps)
{
	printf("����������Ҫ�������˵����֣�>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = Findname(ps, name);
	//��ӡ
	if (ret == -1)
		printf("����˲�����\n");
	else
	{
		printf("%-10s %-20s %-10s %-10s %-20s\n", "����", "�绰", "����", "�Ա�", "סַ");
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
	printf("����������Ҫ�޸ĵ��˵����֣�>");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = Findname(ps, name);
	//��ӡ
	if (ret == -1)
		printf("����˲�����\n");
	else
	{
		int i = ret;
		printf("����������\n");
		scanf("%s", ps->date[i].name);
		printf("������绰\n");
		scanf("%s", ps->date[i].tele);
		printf("����������\n");
		scanf("%d", &ps->date[i].age);
		printf("�������Ա�\n");
		scanf("%s", ps->date[i].sex);
		printf("������סַ\n");
		scanf("%s", ps->date[i].add);
		printf("�޸ĳɹ�\n");
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
			//�Ƚ�
			if (1 == strcmp(ps->date[i].name, ps->date[j + 1].name))
			{
				struct People tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
}