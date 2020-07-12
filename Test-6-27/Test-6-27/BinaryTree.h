#pragma once

typedef int HDateType;
typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	HDateType date;
}BTNode;

BTNode* CreateBinTree(HDateType* array, int size, int* index, HDateType invalid);
void PreOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
void LevelOrder(BTNode* root);
void DestroyTree(BTNode** root);
int GetNodeCount(BTNode* root);//��ȡ�ڵ���
int GetLeafNodeCount(BTNode* root);//��ȡҶ�ӽڵ�
int GetKLevelNodeCount(BTNode* root,unsigned int k);//��ȡ��k��Ľڵ����
BTNode* Find(BTNode* root, HDateType date);//�ҵ����ص�ַ���Ҳ�������NULL
int GetHight(BTNode* root);
int BinaryTreeComplete(BTNode* root);//�ж��Ƿ�Ϊ��ȫ������
BTNode* CopyBinTree(BTNode* root);//����һ��������



///////////////////
void TestTree();

