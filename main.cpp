#include "chess-piece.cpp"
#include "chess-board.cpp"
#include <iostream> 
using namespace std;

int main(){
    chess_board mainBoard;
    mainBoard.settingBlackWhite();
    mainBoard.showingBoard();
    chess_piece obj1 (1,'a',true,'r');

}