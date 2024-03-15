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
   point.y = 12;
   changePointByReference(point, 20, 25);
   print(point);
   Point pointValue = changePointByValue(point, 30, 35);
   print(pointValue);
   Point m_point = mid_point(point, pointValue);
   print(m_point);
}
