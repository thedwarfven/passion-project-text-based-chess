#include "chess-board.h"
#include <iostream>
#include <string>
using namespace std;
chess_board::chess_board(int sizeX, int sizeY)
{
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    worldMesh = new Organism[sizeX][sizeY];
    for (int i = 0; i < sizeX; i++) {
        for (int j = 0; j < sizeY; j++) {
            worldMesh[i][j] = NULL;
        }
    }
}