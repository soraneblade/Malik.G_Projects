#include "chess.h"
using namespace std;

int main(){
    Knight knight(3,6);
    const int rows = 10;
    const int colums = 10;
    char grid[colums][rows];
    for (int c = 0; c < colums; c++){
        for (int r = 0; r < rows; r++){
            grid[c][r] = 'O';
        }
    }
    grid[3][9] = 'K';
    grid[4][9] = 'R';
    grid[5][9] = 'B';
    grid[6][9] = 'Q';
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < colums; j++){
            cout << grid[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;