#include"BinaryTree.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include"Queue.h"
BTNode* BuyBinTree(HDateType date)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	if (newNode == NULL)
	{
		assert(0);
		return NULL;
	}
	newNode->date = date;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

BTNode* CreateBinTree(HDateType* array, int size, int* index, HDateType invalid)
{
	BTNode* root = NULL;
	if (*index < size&&array[*index]!=invalid)
	{
		root = BuyBinTree(array[*index]);
		(++(*index));
		root->left = CreateBinTree(array, size, index, invalid);
		(++(*index));
		root->right = CreateBinTree(array, size, index, invalid);
	}
	return root;
}

void PreOrder(BTNode* root)
{
	if (root)
	{
		printf("%d ", root->date);
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
void InOrder(BTNode* root)
{
	if (root)
	{
		InOrder(root->left);
		printf("%d ", root->date);
		InOrder(root->right);
	}
}
void PostOrder(BTNode* root)
{
	if (root)
	{
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ", root->date);
	}
}
void LevelOrder(BTNode* root)
{
	if (root == NULL)
		return;
	Queue s;
	DequeueInit(&s);
	DequeuePush(&s, root);
	while (!DequeueEmpty(&s))
	{
		BTNode* ret = DequeueFront(&s);
		printf("%d ", ret->date);
		if(ret->left)
		DequeuePush(&s, ret->left);
		if(ret->right)
		DequeuePush(&s, ret->right);
		DequeuePop(&s);
	}
	DequeueDestory(&s);
}

void DestroyTree(BTNode** root)
{
	assert(root);
	if (*root)
	{
		if((*root)->left)
		DestroyTree(&(*root)->left);

		if((*root)->right)
		DestroyTree(&(*root)->right);

		free(*root);
		*root = NULL;
	}
}
int GetNodeCount(BTNode* root)
{
	//return NULL == root ? 0 : GetNodeCount(root->left) + GetNodeCount(root->right) + 1;
	if (root)
		return GetNodeCount(root->left) + GetNodeCount(root->right) + 1;
	else
		return 0;
}
int GetLeafNodeCount(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
	{
		if (root->left == NULL&&root->right == NULL)
			return 1;
		else
			return GetLeafNodeCount(root->left) + GetLeafNodeCount(root->right);
	}
}
int GetKLevelNodeCount(BTNode* root,unsigned int  k)
{
	if (k == 0 || root == NULL)
		return 0;
	else if (k == 1)
		return 1;
	else
		return GetKLevelNodeCount(root->left, k - 1) + GetKLevelNodeCount(root->right, k - 1);
}
BTNode* Find(BTNode* root, HDateType date)
{
	if (root == NULL)
		return NULL;
	else if (root->date == date)
		return root;
	if (Find(root->left, date))
		return root->left;
	else
		return Find(root->right, date);
}
int GetHight(BTNode* root)
{
	int LeftHight = 0;
	int RightHight = 0;
	if (root == NULL)
		return 0;
	if (root->left == NULL&&root->right == NULL)
		return 1;
	LeftHight = GetHight(root->left);
	RightHight = GetHight(root->right);
	return LeftHight> RightHight ? LeftHight + 1 : RightHight + 1;
}
int BinaryTreeComplete(BTNode* root)//判断是否为完全二叉树
{
	if (root == NULL)
		return 1;
	Queue s;
	int flag = 0;
	DequeueInit(&s);
	DequeuePush(&s, root);
	while (!DequeueEmpty(&s))
	{
		BTNode* cur = DequeueFront(&s);
		if (flag)
		{
			if (cur->left || cur->right)
				 break;
		}
		else
		{
			if (cur->left&&cur->right)
			{
				DequeuePush(&s, root->left);
				DequeuePush(&s, root->right);
			}
			else if (cur->left)
			{
				DequeuePush(&s, cur->left);
				flag = 1;
			}
			else if (cur->right)
				break ;
			else
				flag = 1;
		}
		DequeuePop(&s);
	}
	int ret = 1;
	if (!DequeueEmpty(&s))
		ret = 0;
	DequeueDestory(&s);
	return ret;
}
BTNode* CopyBinTree(BTNode* root)
{
	/*if (root == NULL)
		return NULL;
	else
	{
		BTNode* newroot = BuyBinTree(root->date);
		newroot->left = CopyBinTree(root->left);
		newroot->right = CopyBinTree(root->right);
		return newroot;
	}*/
	BTNode* newroot = NULL;
	if (root)
	{
		newroot = BuyBinTree(root->date);
		newroot->left = CopyBinTree(root->left);
		newroot->right = CopyBinTree(root->right);
	}
	return newroot;
}




//////////////
void TestTree()
{
	int array[] = { 1,2,3,-1,-1,-1,4,5,-1,-1,6 };
	int index = 0;
	BTNode* root = CreateBinTree(array,sizeof(array)/sizeof(array[0]),&index,-1);
	printf("后序遍历结果：");
	PostOrder(root);
	printf("\n");

	printf("前序遍历结果：");
	PreOrder(root);
	printf("\n");

	printf("中序遍历结果：");
	InOrder(root);
	printf("\n");

	printf("层序遍历结果：");
	LevelOrder(root);
	printf("\n");
	BTNode* newroot = CopyBinTree(root);
	DestroyTree(&newroot);
	BTNode* cur = Find(root, 5);
	if (cur)
		printf("5 is in binary tree\n");
	else
		printf("5 is not in binary tree\n");
	if (BinaryTreeComplete(root))
		printf("it is binarytreecomplete\n");
	else
		printf("it is not binarytreecomplete\n");
	printf("节点个数为%d\n", GetNodeCount(root));
	printf("数的高度为%d\n", GetHight(root));
	printf("叶子节点个数为%d\n", GetLeafNodeCount(root));
	printf("第3层节点个数为%d\n", GetKLevelNodeCount(root,3));
	DestroyTree(&root);
}