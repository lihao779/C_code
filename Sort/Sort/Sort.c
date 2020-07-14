#include"Sort.h"
#include<stdio.h>
#include"Stack.h"
#include<string.h>
#include<malloc.h>
#include<assert.h>


int UpDate(int key, int date)
{
	return key < date;
}
int DownDate(int key, int date)
{
	return key > date;
}

void Print(int* array, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void InsertSort(int* array, int size,Cmp cmp)
{
	int i = 1;
	for (i = 1; i < size; i++)
	{
		int end = i - 1;
		int key = array[i];
		while (end >= 0 && cmp(key,array[end]))
		{
			array[end + 1] = array[end];
			end--;
		}
		array[end + 1] = key;
	}
}
void ShellSort(int* array, int size, Cmp cmp)//希尔排序
{
	int gap = 3;
	while (gap > 0)
	{
		for (int i = gap; i < size; i++)
		{
			int key = array[i];
			int end = i - gap;
			while (end >= 0 && cmp(key, array[end]))
			{
				array[end + gap] = array[end];
				end -= gap;
			}
			array[end + gap] = key;
		}
		gap--;
	}
}
void Swap(int* left, int* right)
{
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

//选择排序
//初级
void SelectSort1(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int maxPos = 0;
		for (int j = 1; j < size - i; j++)
		{
			if (array[j] > array[maxPos])
				maxPos = j;
		}
		if (maxPos != size - 1 - i)
		{
			Swap(&array[maxPos], &array[size - 1 - i]);
		}
	}
}
//进阶
void SelectSort2(int* array, int size)
{
	/*for (int i = 0; i <= (size/2); i++)
	{
		int minPos = i;
		int maxPos = i;
		for (int j = i+1; j < size - i; j++)
		{
			if (array[j] < array[minPos])
				minPos = j;
			if (array[j] > array[maxPos])
				maxPos = j;
		}
		if (array[maxPos] == array[minPos])
			break;
		if (maxPos == size - 1 - i&&minPos == i)
		{
			Swap(&array[minPos], &array[size - i - 1]);
		}
		else
		{
			if (minPos != size - i - 1)
			{
				Swap(&array[minPos], &array[size - i - 1]);
			}
			if (maxPos != i)
			{
				Swap(&array[maxPos], &array[i]);
			}
		}
	}*/
	int begin = 0, end = size - 1;//标记区间[begin , end]
	while (end > begin)
	{
		int maxPos = begin;
		int minPos = begin;
		for (int j = begin + 1; j <= end; j++)
		{
			if (array[j] > array[maxPos])
				maxPos = j;
			if (array[j] < array[minPos])
				minPos = j;
		}
		if (array[maxPos] == array[minPos])
			break;
		//错误代码
		//if (maxPos == end&&minPos == begin)//降序
		//	Swap(&array[maxPos], &array[minPos]);
		//else
		//{
		//	if (minPos !=end )
		//	{
		//		Swap(&array[minPos], &array[end]);
		//	}
		//	if (maxPos != begin)
		//	{
		//		Swap(&array[maxPos], &array[begin]);
		//	}
		if (maxPos != begin)
			Swap(&array[begin], &array[maxPos]);
		if (minPos == begin)
			minPos = maxPos;
		if (minPos != end)
			Swap(&array[end], &array[minPos]);
		
		begin++;
		end--;
	}
}

void AdjustDown(int* array, int size, int parent)
{
	//用child标记孩子中较大一个，默认标记parent的左孩子
	//先标记左孩子是由于parent如果有孩子一定有左孩子，不一定有右孩子
	int child = 2 * parent + 1; 

	while (child < size)
	{
		//找parent中较大的孩子：用parent的左右孩子比较
		//必须保证parent的右孩子存在
		if (child + 1 < size&&array[child + 1] > array[child])
			child++;

		//检测parent是否满足堆的性质
		if (array[child] > array[parent])
		{
			Swap(&array[child], &array[parent]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
			return;
	}
}
void HeapSort(int* array, int size)//堆排序
{
	//1.建堆
	//从倒数第一个非叶子节点开始到根节点
	for (int root = (size - 1 - 1) / 2; root >= 0; root--)
	{
		AdjustDown(array, size, root);
	}
	//2.排序---->利用堆删除的思想
	int end = size - 1;
	while (end > 0)
	{
		Swap(&array[0], &array[end]);
		AdjustDown(array, end, 0);
		end--;
	}
}

void BubbleSort1(int* array, int size)//冒泡排序
{
	//控制冒泡的趟数
	for (int i = 0; i < size - 1; i++)//-1的目的是可以少冒一趟，因为最后一次冒泡区间只剩下一个元素；
	{
		//冒泡方式：将相邻元素比较-->不满足条件就交换
		for (int j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
				Swap(&array[j - 1], &array[j]);
		}
	}
}

void BubbleSort2(int* array, int size)//冒泡排序//处理{0，1，2，3，5，4}这种
{
	//控制冒泡的趟数
	for (int i = 0; i < size - 1; i++)//-1的目的是可以少冒一趟，因为最后一次冒泡区间只剩下一个元素；
	{
		int flag = 1;
		//冒泡方式：将相邻元素比较-->不满足条件就交换
		for (int j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				flag = 0;
				Swap(&array[j - 1], &array[j]);
			}
		}
		if (flag)
			break;
	}
}
//hoare:提出快排思想的大佬提出的
int Partion1(int* array, int left, int right)
{
	int begin = left;
	int end = right - 1;
	int key = array[end];//基准值
	while (begin < end)
	{
		//让begin从前往后找，找＞基准值的元素，找到就停止
		while (begin<end && array[begin] <= key)
			begin++;
		
		
		//让end从后往前找，找＜基准值的元素，找到就停止
		while (begin<end && array[end] >= key)
			end--;
		if(begin<end)
			Swap(&array[begin], &array[end]);
	}
	if(begin!=right-1)
		Swap(&array[begin], &array[right - 1]);
	
	return begin;
}
//分割代码2
//挖坑法
int Partion2(int* array, int left, int right)
{
	int begin = left;
	int end = right - 1;
	int key = array[end];
	while (begin < end)
	{
		while (begin < end &&array[begin] <= key)
			begin++;
		if (begin < end)
		{
			array[end] = array[begin];
			end--;
		}
		while (begin < end && array[end] >= key)
			end--;
		if (begin < end)
		{
			array[begin] = array[end];
			begin++;
		}
	}
	array[begin] = key;
	return begin;
}
int Partion3(int* array, int left, int right)
{
	int cur = left;
	int prev = left - 1;
	int key = array[right - 1];
	while (cur<right)
	{
		if (array[cur] <= key&&++prev != cur)
			Swap(&array[cur], &array[prev]);
		cur++;
	}
	return prev;
}
//三数求中法
int GetMidindex(int* array, int left, int right)
{
	int Mid = left +( (right - left) >> 1);
	if (array[left]<array[right])
	{
		if (array[Mid]<array[left])
			return left;
		else if (array[Mid]>array[right])
			return right;
		else
			return Mid;
	}
	else
	{
		if (array[Mid]>array[left])
			return left;
		else if (array[Mid]<array[right])
			return right;
		else
			return Mid;
	}
}
//优化代码
int Partion(int* array, int left, int right)
{
	int begin = left;
	int end = right - 1;
	int key;
	int Mid = GetMidindex(array, left, right);
	if (Mid != right - 1)
		Swap(&array[Mid], &array[right - 1]);
	key = array[right-1];
	while (begin<end)
	{
		while (begin<end && array[begin] <= key)
			begin++;
		while (begin<end && array[end] >= key)
			end--;
		if (begin<end)
			Swap(&array[begin], &array[end]);
	}
	Swap(&array[begin], &array[right - 1]);
	return begin;
}
//挖坑法优化
int PartionOP(int* array, int left, int right)
{
	int begin = left;
	int end = right - 1;
	int key;
	int Mid = GetMidindex(array, left, right);
	if (Mid != right - 1)
		Swap(&array[Mid], &array[right - 1]);
	 key = array[end];
	while (begin<end)
	{
		while (begin<end && array[begin] <= key)
			begin++;
		if (begin<end)
		{
			array[end] = array[begin];
			end--;
		}
		while (begin<end && array[end] >= key)
			end--;
		if (begin<end)
		{
			array[begin] = array[end];
			begin++;
		}

	}
	array[begin] = key;
	return begin;
}
int Partionv(int* array, int left, int right)
{
	int cur = left;
	int prev = left - 1;
	int key;
	int Mid = GetMidindex(array, left, right);
	if (Mid != right - 1)
		Swap(&array[Mid], &array[right - 1]);
	key = array[right - 1];
	while (cur<right)
	{
		if (array[cur] <= key&&++prev != cur)
			Swap(&array[cur], &array[prev]);
		cur++;
	}
	return prev;
}

void QuickSort(int* array, int left, int right)//快速排序[left,right)
{
	if (right - left > 1)//元素个数>1  
	{
		//partion函数将区间[left，right)用最右侧基准值划分为前面元素＜基准值
		//后面元素大于基准值；
		int div = Partionv(array, left, right);
		QuickSort(array, left, div);
		QuickSort(array, div + 1, right);
	}
}

void QuickSortNor(int* array, int size)//快速排序
{
	int left = 0;
	int right = size ;
	Stack s;
	StackInit(&s);
	StackPush(&s, right);
	StackPush(&s, left);
	//先按照基准值划分
	//在划分左边界
	//在划分右边界
	while (!StackEmpty(&s))
	{
		left = StackTop(&s);
		StackPop(&s);
		right = StackTop(&s);
		StackPop(&s);
		if (right-left > 1)
		{
			int div = Partion(array, left, right);
			//先按照基准值划分
			//在划分左边界[left,div)
			//在划分右边界[div+1,right)
			StackPush(&s, right);
			StackPush(&s, div + 1);
			StackPush(&s, div);
			StackPush(&s, left);
		}
	  }
	StackDestroy(&s);
}

void MergeDate(int* array, int left, int mid,int  right, int* temp)
{
	int index1 = left;
	int index2 = mid;
	int index = left;
	while (index1<mid && index2<right)
	{
		if (array[index1] <= array[index2])
			temp[index++] = array[index1++];
		else
			temp[index++] = array[index2++];
	}
	while (index1 < mid)
		temp[index++] = array[index1++];
	while (index2 < right)
		temp[index++] = array[index2++];
}


void _MergeSort(int* array, int left, int right, int* temp)
{
	if (right - left > 1)//元素大于一
	{
		int mid = left + ((right - left) >> 1);

		//归并左半部分[left,mid)
		_MergeSort(array, left, mid, temp);
		
		//归并右半部分[mid,right)
		_MergeSort(array, mid, right, temp);

		//归并全部[left,right)-->temp;
		MergeDate(array, left, mid,right, temp);
		memcpy(array+left,temp+left, sizeof(array[left])*(right-left));
	}
}


void MergeSort(int* array, int size)
{	
	int* temp = (int*)malloc(sizeof(array[0])*size);
	if (NULL == temp)
	{
		assert(0);
		return;
	}
	_MergeSort(array, 0, size, temp);
	free(temp);
}
//非递归归并
void MergeSortNor(int* array, int size)
{
	int* temp = (int*)malloc(sizeof(array[0])*size);
	if (NULL == temp)
	{
		assert(0);
		return;
	}
	int gap = 1; 
	while (gap<size)
	{
		for (int i = 0; i<size; i += 2*gap)
		{
			int left = i;
			int mid = i + gap;
			int right = i + 2 * gap;
			if (mid>size)
				mid = size;
			if (right>size)
				right = size;
			//[left,mid)和[mid,right)每个分组中的元素归并
			MergeDate(array, left, mid, right, temp);
			//法一：没归并一次拷贝一次
			//memcpy(array+left,temp+left,sizeof(array[left])*(right-left));
		}
		//法二：没归并一趟拷贝一次
		memcpy(array, temp, sizeof(array[0])*size);
		gap *= 2;
	}
	free(temp);
}


//数据密集的集中在某个范围类
void CountSort(int* array, int size)
{
	//求最大值，最小值
	int maxValue = array[0];
	int minValue = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > maxValue)
			maxValue = array[i];
		if (array[i] < minValue)
			minValue = array[i];
	}


	//申请空间
	int range = maxValue - minValue + 1;
	int* temp = (int*)malloc(sizeof(int)*range);
	memset(temp, 0, sizeof(int*)*range);//全部置为0；

	//统计元素个数
	for (int i = 0; i < size; i++)
		temp[array[i] - minValue]++;


	//回收
	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (temp[i]--)
			array[index++] = i + minValue;
	}
	
	free(temp);

}


///////
void Test()
{
	//int array[] = { 3,6,8,1,9,5,4,2,7,0};
	//int array[] = { 0,1,2,3,4,5,6,7,9,8 };
	int array[] = { 1,1,5,5,9,4,7,0,2,6,8,9,10};
	Print(array, sizeof(array) / sizeof(array[0]));
	//InsertSort(array, sizeof(array) / sizeof(array[0]),DownDate);
	//ShellSort(array, sizeof(array) / sizeof(array[0]), DownDate);
	//SelectSort2(array, sizeof(array) / sizeof(array[0]));
	//HeapSort(array, sizeof(array) / sizeof(array[0]));
	//BubbleSort1(array, sizeof(array) / sizeof(array[0]));
	//BubbleSort2(array, sizeof(array) / sizeof(array[0]));
	//QuickSort(array,0, sizeof(array) / sizeof(array[0]));
	//QuickSortNor(array, sizeof(array) / sizeof(array[0]));
	//MergeSort(array, sizeof(array) / sizeof(array[0]));
	//MergeSortNor(array, sizeof(array) / sizeof(array[0]));
	CountSort(array, sizeof(array) / sizeof(array[0]));
	Print(array, sizeof(array) / sizeof(array[0]));
	

}

