#include"contact.h"
void meun()
{
	printf("****************************************************\n");
	printf("******   1.Add     2.Del     3.Search          *****\n");
	printf("******   4.Mod    5.Show     6.Sort     0.Exit *****\n");
	printf("****************************************************\n");

}
int main()
{
	int input = 0;
	struct contact con;
	//��ʼ��
	Init(&con);
	do
	{
		meun();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case Add:
			Addcontact(&con);
			break;
		case Del:
			Delcontact(&con);
			break;
		case Search:
			Searchcontact(&con);
			break;
		case Mod:
			Modcontact(&con);
			break;
		case Show:
			Showcontact(&con);
			break;
		case Sort:
			Sortcontact(&con);
			break;
		case Exit:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}