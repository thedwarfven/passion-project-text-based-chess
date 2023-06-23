#include "chess-piece.cpp"
#include "chess-board.cpp"
#include <iostream> 
#include <string>
#include <vector>
using namespace std;

void processChessPieces(chess_board& mainBoard) {
    for (chess_piece* piece : chess_piece::objects) {
        int positionX = piece->positionX;
        char positionY = piece->positionY;
        bool blackWhite = piece->blackWhite;
        char pieceType = piece->pieceType;
        bool firstMove = piece->firstMove;
        mainBoard.setElement(positionX,positionY,piece->outputingToBoard(blackWhite,pieceType));
    }
}
void makingAMove(chess_board& mainBoard,chess_piece* foundPiece) {
        int positionX = foundPiece->positionX;
        char positionY = foundPiece->positionY;
        bool blackWhite = foundPiece->blackWhite;
        char pieceType = foundPiece->pieceType;
        bool firstMove = foundPiece->firstMove;
        mainBoard.setElement(positionX,positionY,foundPiece->outputingToBoard(blackWhite,pieceType));
    
}

int main(){
    chess_board mainBoard;
    mainBoard.settingBlackWhite();
    chess_piece wRook1 (1,'a',true,'r',true);
    chess_piece wKnight1 (1,'b',true,'n');
    chess_piece wBishop1 (1,'c',true,'b');
    chess_piece wQueen (1,'d',true,'q');
    chess_piece wKing (1,'e',true,'k',true);
    chess_piece wBishop2 (1,'f',true,'b');
    chess_piece wKnight2 (1,'g',true,'n');
    chess_piece wRook2 (1,'h',true,'r',true);
    chess_piece wPawn1 (2,'a',true,'p',true);
    chess_piece wPawn2 (2,'b',true,'p',true);
    chess_piece wPawn3 (2,'c',true,'p',true);
    chess_piece wPawn4 (2,'d',true,'p',true);
    chess_piece wPawn5 (2,'e',true,'p',true);
    chess_piece wPawn6 (2,'f',true,'p',true);
    chess_piece wPawn7 (2,'g',true,'p',true);
    chess_piece wPawn8 (2,'h',true,'p',true);
    
    chess_piece bRook1 (8,'a',false,'r',true);
    chess_piece bKnight1 (8,'b',false,'n');
    chess_piece bBishop1 (8,'c',false,'b');
    chess_piece bQueen (8,'d',false,'q');
    chess_piece bKing (8,'e',false,'k',true);
    chess_piece bBishop2 (8,'f',false,'b');
    chess_piece bKnight2 (8,'g',false,'n');
    chess_piece bRook2 (8,'h',false,'r',true);
    chess_piece bPawn1 (7,'a',false,'p',true);
    chess_piece bPawn2 (7,'b',false,'p',true);
    chess_piece bPawn3 (7,'c',false,'p',true);
    chess_piece bPawn4 (7,'d',false,'p',true);
    chess_piece bPawn5 (7,'e',false,'p',true);
    chess_piece bPawn6 (7,'f',false,'p',true);
    chess_piece bPawn7 (7,'g',false,'p',true);
    chess_piece bPawn8 (7,'h',false,'p',true);
    int sentinel=0;
    bool whosTurn=false;
    char Y;
    int X;
    string square;
    while (sentinel!=4){
        processChessPieces(mainBoard);
        recordingPiecePosition();
        cout <<"Welcome to Chess board main UI: \nwhat would you like to do?\n\n[1] Show the current chess board\n\n[2] Show the current notation\n\n[3] Make a move\n\n[4] Quit/surrender\nYour choice:";
        cin>> sentinel;
        if (whosTurn==true){
            whosTurn=false;
        }
        else {
            whosTurn=true;
        }
        switch (sentinel)
        {
        case 1:
            mainBoard.showingBoard();
            break;
        case 2:
            mainBoard.showNotation();
            break;
        case 3:
            cout<< "\nselect the square (Ex. a4):";
            cin>>square;
            if (square.length() >= 2) {
        Y = square[0];
        if (isdigit(square[1])) {
            X = square[1] - '0';
        }
    }
            chess_piece* foundPiece = findChessPiece(Y, X,whosTurn);
            if (foundPiece != nullptr) {
                //continue with the code
                // Do something with the foundPiece object
            } else {
                cout << "No matching chess piece found, please check if it is the right color piece!" << endl;
            }
            break;
        case 4:
            //exit code 
            break;
        default:
            printf("the option you chose does not exist! Please choose again!\n\n\n");
            break;
        clearingPiecePosition();
        }
    }
}