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
int GetNodeCount(BTNode* root);//获取节点数
int GetLeafNodeCount(BTNode* root);//获取叶子节点
int GetKLevelNodeCount(BTNode* root,unsigned int k);//获取第k层的节点个数
BTNode* Find(BTNode* root, HDateType date);//找到返回地址，找不到返回NULL
int GetHight(BTNode* root);
int BinaryTreeComplete(BTNode* root);//判断是否为完全二叉树
BTNode* CopyBinTree(BTNode* root);//拷贝一个二叉树



///////////////////
void TestTree();

