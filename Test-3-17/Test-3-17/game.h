#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//玩家赢返回#
//电脑赢返回@
//平局返回 Q
//继续返回 C
char IsWin(char board[ROW][COL], int row, int col);