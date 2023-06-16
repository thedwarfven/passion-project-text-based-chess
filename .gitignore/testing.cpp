#include <iostream>
#include <string>
using namespace std;

int main() {
    int size1 = 8;
    string** mesh = new string*[size1];
    for (int i = 0; i < size1; i++) {
        mesh[i] = new string[size1];
        for (int j = 0; j < size1; j++) {
            mesh[i][j] = "";
        }
    }//declaring the 8x8 chess board
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            string W = "\u2616";
            string B = "\u2617";
            if (j%2){
                mesh[i][j] = W;
                }
            else {
                mesh[i][j] = B;
            }
        }
    }//filling said board with black and white spaces
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            cout << mesh[i][j];
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < size1; i++) {
        delete[] mesh[i];
    }
    delete[] mesh;

    return 0;
}
