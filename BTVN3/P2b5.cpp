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
struct Rect{
    int x, y;
    int w, h;
    Rect(int newX, int newY, int newW, int newH){
        x = newX;
        y = newY;
        w = newW;
        h = newH;
    }
    bool contains(const Point point){
        if(point.x < x || point.x > x + w || point.y < y || point.y > y + h){
            return false;
        }
        else return true;
    }
};
int main(){
    Rect rect(100, 100, 100, 100);
    Point point;
    point.x = 100;
    point.y = 100;
    bool check = rect.contains(point);
    if (check){
        cout << "true";
    }
    else{
        cout <<"false";
    }

}
