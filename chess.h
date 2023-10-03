#include <iostream>
using namespace std;

class Knight{
    public: 
        void Move(int x, int y);
        Knight();
        int getX();
        int getY();
        void setX(int valX);
        void setY(int valY);
    private:
        int xpos;
        int ypos;
};