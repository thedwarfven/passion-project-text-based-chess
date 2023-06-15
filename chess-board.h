#pragma once
#include <iostream>
#include <string>
using namespace std;
class chess_board
{
private:
    int sizeX;
    int sizeY;
    Organism * worldMesh;
public:
    chess_board(int positionX, int positionY);
};