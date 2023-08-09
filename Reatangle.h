#pragma once
#include "Shape.h"
class Reatangle :
    public Shape
{
private:
    int lenght;
    int width;
public:
    Reatangle(int l, int w, string c) :Shape(c) {
        lenght = l;
        width = w;
    }
    int area() {
        cout << "area = " << (width * lenght) << "\n";
        return (width * lenght);
    } 
    void draw() {
        cout << "Draw "  "\n";
    }
    void erase() {
        cout << "erase "  "\n";
    }
    
};

