#include "chess-board.h"
#include "chess-piece.h"
#include "chess-piece.cpp"
#include "chess-board.cpp"
#include <iostream> 
using namespace std;

int main(){
    chess_board chess_board;
    chess_board.settingBlackWhite();
    chess_board.showingBoard();
    
}