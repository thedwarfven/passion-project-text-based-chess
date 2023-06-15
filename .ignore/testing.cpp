#include <iostream>
using namespace std;

int main(){
    int size1=7;
    int** mesh = new int*[size1];
for( int i = 0; i < size1; i++ ) {
    mesh[i] = new int[size1];
    for( int j = 0; j < size1; j++ ) {
        mesh[i][j] = 0;
    }
}

}