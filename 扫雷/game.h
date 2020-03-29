#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define EASY_COUNT 10
//≥ı ºªØ
void Initboard(char board[ROWS][COLS], int rows, int cols,char str);
//¥Ú”°∆Â≈Ã
void Displayboard(char board[ROWS][COLS],int row,int col );
void Setmine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row, int col);