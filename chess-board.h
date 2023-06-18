#pragma once
#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <string>
using namespace std;
class chess_board
{
private:
string **mesh;
int size1=9;
public:
chess_board();
~chess_board();
void settingBlackWhite();
void showingBoard();
void setElement(int row, int col, const string& value);
};
#endif