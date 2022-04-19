#include<iostream>
using namespace std;

class Point {
    private:
    int x, y;
    public:
    Point(int = 0; int = 0);
    int getx();
    int gety();
    void setx(int x);
    void sety(int y);
    void Movex(int i);
    void Movey(int i);
    void Input();
    void Output();
};

Point::Point(int a, int b) {
    x = a; 
    y = b;
} 
void Point::Input() {
    cin >> x >> y;
}
void Point::Output() {
    cout << "(" << x << "," << y << ")";
}
int Point::getx() {
    return x;
}
int Point::gety() {
    return y;
}
void Point::setx(int x) {
    this->x = x;
}
void Point::sety(int y) {
    this->y = y;
}
void Point::movex(int i) {
    x = x + i;
}
void Point::movey(int i) {
    y = y + i;
}

int main() {
    Point p;
    p.Input();
    int i;
    p.Movex(i);
    p.Movey(i);
    p.Output();
    return 0;
}