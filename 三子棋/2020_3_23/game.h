#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitArray(char board[ROW][COL], int row, int col);
void PrintArray(char board[ROW][COL], int row, int col);
void DisPlayboard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void PlayComputer(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
//����#���Ӯ
//����@����Ӯ
//����C����
//����Qƽ��