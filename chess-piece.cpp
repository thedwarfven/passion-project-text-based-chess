#include "chess-piece.h"

#include <iostream>
#include <string>
using namespace std;

chess_piece::chess_piece(){
    positionX=0;
    positionY='a';
    blackWhite=0;
    pieceType='a';
}
chess_piece::chess_piece(int row, char column, bool bW,char pT){
    positionX=row;
    positionY=column;
    blackWhite=bW;
    pieceType=pT;
}
chess_piece::chess_piece(int row, char column, bool bW,char pT,bool firstMove){
    positionX=row;
    positionY=column;
    blackWhite=bW;
    pieceType=pT;
    firstMove=1;
}
string chess_piece::outputingToBoard(bool bW,char pT){

}
void chess_piece::kingMove(){

}
void chess_piece::queenMove(){

}
void chess_piece::bishopMove(){

}
void chess_piece::knightmove(){

}
void chess_piece::rookMove(){

}
void chess_piece::pawnMove(){

}
void chess_piece::pawnCapture(){

}
void chess_piece::enpassant(){
    
}
void chess_piece::pawnPromotion(){

}
void chess_piece::checkIfChecked(){

}
void chess_piece::castle(){

}