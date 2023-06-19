#include "chess-piece.cpp"
#include "chess-board.cpp"
#include <iostream> 
using namespace std;

int main(){
    chess_board mainBoard;
    mainBoard.settingBlackWhite();
    mainBoard.showingBoard();
    chess_piece wRook1 (1,'a',true,'r',true);
    chess_piece wKnight1 (1,'b',true,'n');
    chess_piece wBishop1 (1,'c',true,'b');
    chess_piece wQueen (1,'d',true,'q');
    chess_piece wKing (1,'e',true,'k',true);
    chess_piece wBishop2 (1,'f',true,'b');
    chess_piece wKnight2 (1,'g',true,'n');
    chess_piece wRook2 (1,'h',true,'r',true);
    chess_piece wPawn1 (1,'a',true,'p',true);
    chess_piece wPawn2 (1,'b',true,'p',true);
    chess_piece wPawn3 (1,'c',true,'p',true);
    chess_piece wPawn4 (1,'d',true,'p',true);
    chess_piece wPawn5 (1,'e',true,'p',true);
    chess_piece wPawn6 (1,'f',true,'p',true);
    chess_piece wPawn7 (1,'g',true,'p',true);
    chess_piece wPawn8 (1,'h',true,'p',true);
    
    chess_piece bRook1 (8,'a',false,'r',true);
    chess_piece bKnight1 (8,'b',false,'n');
    chess_piece bBishop1 (8,'c',false,'b');
    chess_piece bQueen (8,'d',false,'q');
    chess_piece bKing (8,'e',false,'k',true);
    chess_piece bBishop2 (8,'f',false,'b');
    chess_piece bKnight2 (8,'g',false,'n');
    chess_piece bRook2 (8,'h',false,'r',true);
    chess_piece bPawn1 (8,'a',false,'p',true);
    chess_piece bPawn2 (8,'b',false,'p',true);
    chess_piece bPawn3 (8,'c',false,'p',true);
    chess_piece bPawn4 (8,'d',false,'p',true);
    chess_piece bPawn5 (8,'e',false,'p',true);
    chess_piece bPawn6 (8,'f',false,'p',true);
    chess_piece bPawn7 (8,'g',false,'p',true);
    chess_piece bPawn8 (8,'h',false,'p',true);
}