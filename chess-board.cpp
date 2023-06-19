#include "chess-board.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

chess_board::chess_board(){
    mesh = new string*[size1];
    for (int i = 0; i < size1; i++) {
        mesh[i] = new string[size1];
        for (int j = 0; j < size1; j++) {
            mesh[i][j] = "";
        }
    }//declaring the 8x8 chess board
}
chess_board::~chess_board(){
    for (int i = 0; i < size1; i++) {
            delete[] mesh[i];
        }
        delete[] mesh;
}
void chess_board::whiteWriteNotation(string notation){
    whiteNotation.push_back(notation);
}
void chess_board::blackWriteNotation(string notation){
    blackNotation.push_back(notation);
}
void chess_board::showNotation(){
    std::size_t whiteSize = whiteNotation.size();
    std::size_t blackSize = blackNotation.size();
    std::size_t minSize = std::min(whiteSize, blackSize);

    for (std::size_t i = 0; i < minSize; i++) {
        cout << whiteNotation[i] << " " << blackNotation[i] << " ";
        cout << endl;
    }
    // If whiteNotation has one extra element, print it
    if (whiteSize > blackSize) {
        cout << whiteNotation[whiteSize - 1] << " " << endl;
    }
}
void chess_board::settingBlackWhite(){
    int everyOther=0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            string W = "\u2616";
            string B = "\u2617";
            if(everyOther%2) {
                if (j%2){
                mesh[i][j] = W;
                }
            else {
                mesh[i][j] = B;
            }
            }
            else {
                if (j%2==0){
                mesh[i][j] = W;
                }
            else {
                mesh[i][j] = B;
            }
            }
        }
        everyOther++;
    }//filling said board with black and white spaces
    char columns='a';
    char rows='8';
    for (int i = 1; i < size1; i++) {
        mesh[8][i]=columns;
        columns++;
    }//adding letter for columns
    for (int j = 0; j < size1; j++) {
        mesh[j][0]=rows;
        rows--;
    }//adding numbers to rows
}
void chess_board::showingBoard(){
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            cout << mesh[i][j]<<" ";
        }
        cout << endl;
    }//reading every cell,outputing to terminal

}
void chess_board::setElement(int row, int col, const string& value) {
        if (row >= 0 && row < size1 && col >= 0 && col < size1) {
            mesh[row][col] = value;
        }
    }