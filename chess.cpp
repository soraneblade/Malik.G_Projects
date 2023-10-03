#include "chess.h"
using namespace std;

Knight::Knight(){
    xpos = 3;
    this->ypos = 0;
}
int Knight::getX() {
    return this->xpos;
}
int Knight::getY() {
    return this->ypos;
}
void Knight::setX(int valX) {
    xpos = valX;
}

void Knight::setY(int valY) {
    this->ypos = valY;
}

void Knight::Move(int x, int y){

}