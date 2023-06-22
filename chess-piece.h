#pragma once
#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
#include <iostream>
#include <string>
#include<vector>
using namespace std;

class chess_piece{
private:
string whiteAsset[6]{"\u2654","\u2655","\u2656","\u2657","\u2658","\u2659"};
string blackAsset[6]{"\u265A","\u265B","\u265C","\u265D","\u265E","\u265F"};


public:
int positionX;
char positionY;
bool blackWhite;
char pieceType;
bool firstMove;
static vector<chess_piece*> objects;
chess_piece();
chess_piece(int row, char column, bool bW,char pT);
chess_piece(int row, char column, bool bW,char pT,bool firstMove);
~chess_piece();
chess_piece* findChessPiece(char Y, int X);
static int getObjectCount();
string outputingToBoard(bool bW,char pT);
void kingMove();
void queenMove();
void bishopMove();
void knightmove();
void rookMove();
void pawnMove();
void pawnCapture();
void enpassant();
void pawnPromotion();
void checkIfChecked();
void castle();
};
#endif