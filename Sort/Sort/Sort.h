#pragma once
typedef (*Cmp)(int, int);
int UpDate(int key, int date);
int DownDate(int key, int date);

void Print(int* array, int size);


////////////////////////////////////////////

//比较类排序

void InsertSort(int* array, int size,Cmp cmp);//插入排序

void ShellSort(int* array, int size, Cmp cmp);//希尔排序

void SelectSort1(int* array, int size);//选择排序

void SelectSort2(int* array, int size);//选择排序

void HeapSort(int* array, int size);//堆排序

void BubbleSort1(int* array, int size);//冒泡排序

void BubbleSort2(int* array, int size);//冒泡排序//处理{0，1，2，3，5，4}这种

void QuickSort(int* array, int left,int right);//快速排序

void QuickSortNor(int* array, int size);//非递归快速排序

void MergeSort(int* array, int size);//归并排序
void MergeSortNor(int* array, int size);//非递归归并排序



/////////////////////////


//非比较类排序
void CountSort(int* array, int size); 


///////
void Test();
