#include "chess-piece.h"

#include <iostream>
#include <string>
#include<vector>
using namespace std;

std::vector<chess_piece*> chess_piece::objects;

chess_piece::chess_piece(){
    positionX=0;
    positionY='a';
    blackWhite=0;
    pieceType='a';
    objects.push_back(this);
}
chess_piece::chess_piece(int row, char column, bool bW,char pT){
    positionX=row;
    positionY=column;
    blackWhite=bW;
    pieceType=pT;
    objects.push_back(this);
}
chess_piece::chess_piece(int row, char column, bool bW,char pT,bool fM){
    positionX=row;
    positionY=column;
    blackWhite=bW;
    pieceType=pT;
    firstMove=fM;
    objects.push_back(this);
}
chess_piece::~chess_piece() {
    // Find and remove the current object from the vector
} 
chess_piece* findChessPiece(char Y, int X,bool whosTurn) {
    for (chess_piece* piece : chess_piece::objects) {
        if (piece->positionY == Y && piece->positionX == X&&piece->blackWhite==whosTurn) {
            return piece; // Found a matching chess piece
        }
    }

    return nullptr; // No matching chess piece found
}
int chess_piece::getObjectCount() {
    return objects.size();
}
string chess_piece::outputingToBoard(bool bW,char pT){
    if(bW==true){
        switch (pT)
        {
        case 'k':
            return whiteAsset[0];
            break;
        case 'q':
            return whiteAsset[1];
            break;
        case 'r':
            return whiteAsset[2];
            break;
        case 'b':
            return whiteAsset[3];
            break;
        case 'n':
            return whiteAsset[4];
            break;
        case 'p':
            return whiteAsset[5];
            break;
            default:
            return "ERROR";
        }
    }
    else{
        switch (pT)
        {
        case 'k':
            return blackAsset[0];
            break;
        case 'q':
            return blackAsset[1];
            break;
        case 'r':
            return blackAsset[2];
            break;
        case 'b':
            return blackAsset[3];
            break;
        case 'n':
            return blackAsset[4];
            break;
        case 'p':
            return blackAsset[5];
            break;
            default:
            return "ERROR";
        }
    }
    return "ERROR";
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