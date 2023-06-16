#pragma once
#include <iostream>
#include <string>
using namespace std;
class chess_board
{
private:
string **mesh;
int size1=8;
public:
chess_board();
~chess_board();
void settingBlackWhite();
void showingBoard();
void setElement(int row, int col, const string& value);
};