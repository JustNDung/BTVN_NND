#include <bits/stdc++.h>
using namespace std;
struct Rect{
    int x, y;
    int w, h;
    Rect(int newX = 0, int newY = 0, int newW = 0, int newH = 0){
        x = newX;
        y = newY;
        w = newW;
        h = newH;
    }
};
struct Ship{
    string id;
    int dx, dy;
    Rect rect;
    Ship(Rect _rect, string _id, int _dx, int _dy){
        rect = _rect;
        id = _id;
        dx = _dx;
        dy = _dy;
    }
    movee(){
        rect.x += dx;
        rect.y += dy;
    }
};
display(const Ship &ship){
    cout << ship.id <<" "<< ship.rect.x <<" "<< ship.rect.y << endl;
}
int main(){
    Rect rect(100, 100, 100, 100);
    Ship ship1(rect, "ngoc", 5, 5);
    Ship ship2(rect, "dung", 6, 6);
    int loop = 0;
    while (loop < 10) {
    loop ++;
    ship1.movee(); ship2.movee();
    display(ship1); display(ship2);
}
}
