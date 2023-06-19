#pragma once
#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class chess_board
{
private:
string **mesh;
int size1=9;
vector<string> whiteNotation;
vector<string> blackNotation;
public:
chess_board();
~chess_board();
void whiteWriteNotation(string notation);
void blackWriteNotation(string notation);
void showNotation();
void settingBlackWhite();
void showingBoard();
void setElement(int row, int col, const string& value);
};
#endif