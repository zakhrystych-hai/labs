#include <iostream>
using namespace std;

void task1() {
    int x, y;
    cout << "\n************* task 1 - If 25 *****************\n enter x: ";
     cin >> x;

    if (cin){
        if (x >= -2 && x <= 2) {
            y = -3 * x;}
        else if (x <= -2 || x >= 2){
        y = 2 * x;}
        cout << "number is: " << y << endl;
    }
    else {
        cout << "wrong input\n";}

    }

void task2(){
    double a, b, c;
    cout << "\n************* task 1 - If 16 *****************\nenter a, b, c: ";
    cin >> a >> b >> c;
    if (cin){
        if (b > a && c > b){
            a*= 2; b*= 2; c*= 2;
        }
        else {
            a=-a; b=-b; c=-c;
        }
        cout  << "\na: "<< a << ", b: " << b << ", c: " << c;
    }
    else {
        cout << "wrong input\n";}
    }

void task3() {
    double a, x, y;

    cout << "\n************* task 3 - Geometry 10 *****************\n";
    cout << "enter a, x, y: ";
    cin >> a >> x >> y;

    if (cin && a > 0) {

        // Перевірка належності точки квадрату
        bool square = (x >= -a/2 && x <= a/2 &&
                       y >= -a && y <= 0);

        // Перевірка належності точки колу
        bool circle = (x*x + (y+a/2)*(y+a/2) <= (a/2)*(a/2));

        // Діагональна пряма
        double line = x - a/2;

        // Коричневі області
        bool area1 = (x < 0 && y < line && circle);
        bool area2 = (x < 0 && y > line && !circle && y < -a/2);
        bool area3 = (x > 0 && y < line && !circle && y > -a/2);

        if (square && (area1 || area2 || area3)) {
            cout << "Point is inside brown area\n";
        }
        else {
            cout << "Point is outside brown area\n";
        }
    }
    else {
        cout << "wrong input\n";
    }
}

int main()
{
    int menu;
    cout << "Select task. (1-3)\n";
    cin >> menu;
    switch(menu) {
    case 1: task1(); break;
    case 2: task2(); break;
    case 3: task3(); break;

    default: cout << "Wrong input! (Only 1-3)\n";
    }

    return 0;
}


