#pragma once
typedef (*Cmp)(int, int);
int UpDate(int key, int date);
int DownDate(int key, int date);

void Print(int* array, int size);


////////////////////////////////////////////

//�Ƚ�������

void InsertSort(int* array, int size,Cmp cmp);//��������

void ShellSort(int* array, int size, Cmp cmp);//ϣ������

void SelectSort1(int* array, int size);//ѡ������

void SelectSort2(int* array, int size);//ѡ������

void HeapSort(int* array, int size);//������

void BubbleSort1(int* array, int size);//ð������

void BubbleSort2(int* array, int size);//ð������//����{0��1��2��3��5��4}����

void QuickSort(int* array, int left,int right);//��������

void QuickSortNor(int* array, int size);//�ǵݹ��������

void MergeSort(int* array, int size);//�鲢����
void MergeSortNor(int* array, int size);//�ǵݹ�鲢����



/////////////////////////


//�ǱȽ�������
void CountSort(int* array, int size); 


///////
void Test();
