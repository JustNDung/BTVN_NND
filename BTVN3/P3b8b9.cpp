#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
};
void changePointByReference(Point &p, int newX, int newY){
    p.x = newX;
    p.y = newY;
}
Point changePointByValue(Point p, int newX, int newY){
    p.x = newX;
    p.y = newY;
    return p;
}
Point mid_point(const Point a, const Point b){
    Point point;
    point.x = (a.x + b.x) / 2;
    point.y = (a.y + b.y) / 2;
    return point;
}
void print(Point p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
int main(){
    Point point;
    point.x = 10;
    point.y = 15;
    cout << "Address of point : " << &point << endl;
    cout << "Address of point.x : " << &(point.x) << endl;
    cout << "Address of point.y : " << &(point.y) << endl;
}
