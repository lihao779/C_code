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
void ShellSort(int* array, int size, Cmp cmp)//ϣ������
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

//ѡ������
//����
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
//����
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
	int begin = 0, end = size - 1;//�������[begin , end]
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
		//�������
		//if (maxPos == end&&minPos == begin)//����
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
	//��child��Ǻ����нϴ�һ����Ĭ�ϱ��parent������
	//�ȱ������������parent����к���һ�������ӣ���һ�����Һ���
	int child = 2 * parent + 1; 

	while (child < size)
	{
		//��parent�нϴ�ĺ��ӣ���parent�����Һ��ӱȽ�
		//���뱣֤parent���Һ��Ӵ���
		if (child + 1 < size&&array[child + 1] > array[child])
			child++;

		//���parent�Ƿ�����ѵ�����
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
void HeapSort(int* array, int size)//������
{
	//1.����
	//�ӵ�����һ����Ҷ�ӽڵ㿪ʼ�����ڵ�
	for (int root = (size - 1 - 1) / 2; root >= 0; root--)
	{
		AdjustDown(array, size, root);
	}
	//2.����---->���ö�ɾ����˼��
	int end = size - 1;
	while (end > 0)
	{
		Swap(&array[0], &array[end]);
		AdjustDown(array, end, 0);
		end--;
	}
}

void BubbleSort1(int* array, int size)//ð������
{
	//����ð�ݵ�����
	for (int i = 0; i < size - 1; i++)//-1��Ŀ���ǿ�����ðһ�ˣ���Ϊ���һ��ð������ֻʣ��һ��Ԫ�أ�
	{
		//ð�ݷ�ʽ��������Ԫ�رȽ�-->�����������ͽ���
		for (int j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
				Swap(&array[j - 1], &array[j]);
		}
	}
}

void BubbleSort2(int* array, int size)//ð������//����{0��1��2��3��5��4}����
{
	//����ð�ݵ�����
	for (int i = 0; i < size - 1; i++)//-1��Ŀ���ǿ�����ðһ�ˣ���Ϊ���һ��ð������ֻʣ��һ��Ԫ�أ�
	{
		int flag = 1;
		//ð�ݷ�ʽ��������Ԫ�رȽ�-->�����������ͽ���
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
//hoare:�������˼��Ĵ��������
int Partion1(int* array, int left, int right)
{
	int begin = left;
	int end = right - 1;
	int key = array[end];//��׼ֵ
	while (begin < end)
	{
		//��begin��ǰ�����ң��ң���׼ֵ��Ԫ�أ��ҵ���ֹͣ
		while (begin<end && array[begin] <= key)
			begin++;
		
		
		//��end�Ӻ���ǰ�ң��ң���׼ֵ��Ԫ�أ��ҵ���ֹͣ
		while (begin<end && array[end] >= key)
			end--;
		if(begin<end)
			Swap(&array[begin], &array[end]);
	}
	if(begin!=right-1)
		Swap(&array[begin], &array[right - 1]);
	
	return begin;
}
//�ָ����2
//�ڿӷ�
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
//�������з�
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
//�Ż�����
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
//�ڿӷ��Ż�
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

void QuickSort(int* array, int left, int right)//��������[left,right)
{
	if (right - left > 1)//Ԫ�ظ���>1  
	{
		//partion����������[left��right)�����Ҳ��׼ֵ����Ϊǰ��Ԫ�أ���׼ֵ
		//����Ԫ�ش��ڻ�׼ֵ��
		int div = Partionv(array, left, right);
		QuickSort(array, left, div);
		QuickSort(array, div + 1, right);
	}
}

void QuickSortNor(int* array, int size)//��������
{
	int left = 0;
	int right = size ;
	Stack s;
	StackInit(&s);
	StackPush(&s, right);
	StackPush(&s, left);
	//�Ȱ��ջ�׼ֵ����
	//�ڻ�����߽�
	//�ڻ����ұ߽�
	while (!StackEmpty(&s))
	{
		left = StackTop(&s);
		StackPop(&s);
		right = StackTop(&s);
		StackPop(&s);
		if (right-left > 1)
		{
			int div = Partion(array, left, right);
			//�Ȱ��ջ�׼ֵ����
			//�ڻ�����߽�[left,div)
			//�ڻ����ұ߽�[div+1,right)
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
	if (right - left > 1)//Ԫ�ش���һ
	{
		int mid = left + ((right - left) >> 1);

		//�鲢��벿��[left,mid)
		_MergeSort(array, left, mid, temp);
		
		//�鲢�Ұ벿��[mid,right)
		_MergeSort(array, mid, right, temp);

		//�鲢ȫ��[left,right)-->temp;
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
//�ǵݹ�鲢
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
			//[left,mid)��[mid,right)ÿ�������е�Ԫ�ع鲢
			MergeDate(array, left, mid, right, temp);
			//��һ��û�鲢һ�ο���һ��
			//memcpy(array+left,temp+left,sizeof(array[left])*(right-left));
		}
		//������û�鲢һ�˿���һ��
		memcpy(array, temp, sizeof(array[0])*size);
		gap *= 2;
	}
	free(temp);
}


//�����ܼ��ļ�����ĳ����Χ��
void CountSort(int* array, int size)
{
	//�����ֵ����Сֵ
	int maxValue = array[0];
	int minValue = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > maxValue)
			maxValue = array[i];
		if (array[i] < minValue)
			minValue = array[i];
	}


	//����ռ�
	int range = maxValue - minValue + 1;
	int* temp = (int*)malloc(sizeof(int)*range);
	memset(temp, 0, sizeof(int*)*range);//ȫ����Ϊ0��

	//ͳ��Ԫ�ظ���
	for (int i = 0; i < size; i++)
		temp[array[i] - minValue]++;


	//����
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

