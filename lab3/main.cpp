#include <iostream>
using namespace std;
// Завдання 1. If25
// Для заданого цілого x обчислити значення функції:
// y = -3*x, якщо x належить [-2, 2];
// y = 2*x, в іншому випадку.
void task1() {
    int x, y;
    cout << "\n************* task 1 - If 25 *****************\n enter x: ";
     cin >> x;
    // Перевірка правильності введення
    if (cin){
        // Перевірка належності x заданому проміжку
        if (x >= -2 && x <= 2) {
            y = -3 * x;}
        else if (x <= -2 || x >= 2){
        y = 2 * x;}
        // Виведення результату
        cout << "number is: " << y << endl;
    }
    else {
        cout << "wrong input\n";}

    }
// Завдання 1. If16
// Дано три дійсних числа a, b, c.
// Якщо числа впорядковані за зростанням, подвоїти їх.
// В іншому випадку змінити їх знаки на протилежні.
void task2(){
    double a, b, c;
    cout << "\n************* task 1 - If 16 *****************\nenter a, b, c: ";
    cin >> a >> b >> c;
    // Перевірка правильності введення
    if (cin){
         // Перевірка зростання
        if (b > a && c > b){
            a*= 2; b*= 2; c*= 2;
        }
        // Зміна знаків чисел на протилежні
        else {
            a=-a; b=-b; c=-c;
        }
        // Зміна знаків чисел на протилежні
        cout  << "\na: "<< a << ", b: " << b << ", c: " << c;
    }
    else {
        cout << "wrong input\n";}
    }

// Завдання 3. Geometry10
// Дано сторону квадрата a та координати точки (x, y).
// Визначити, чи належить точка коричневій області
// геометричної фігури відповідно до варіанта 10.
void task3() {
    double a, x, y;

    cout << "\n************* task 3 - Geometry 10 *****************\n";
    cout << "Enter a, x, y: ";
    cin >> a >> x >> y;

    // Перевірка правильності введення
    if (!cin || a <= 0) {
        cout << "Wrong input!\n";
        return;
    }

    // Радіус кола
    double r = a / 2;

    // Перевірка належності точки квадрату
    bool square = (x >= -r && x <= r &&
                   y >= -a && y <= 0);

    // Перевірка належності точки колу
    bool circle = (x*x + (y+r)*(y+r) <= r*r);

    // Рівняння діагональної прямої
    double line = x - r;

    // Коричнева область усередині кола зліва внизу
    bool area1 = (x < 0 && y < line && circle);

    // Коричнева область поза колом зліва внизу
    bool area2 = (x < 0 && y > line &&
                  y < -r && !circle);

    // Коричнева область поза колом справа вгорі
    bool area3 = (x > 0 && y < line &&
                  y > -r && !circle);

    // Перевірка належності точки коричневій області
    if (square && (area1 || area2 || area3)) {
        cout << "Point is inside brown area\n";
    }
    else {
        cout << "Point is outside brown area\n";
    }
}

int main()
{
    int menu;
    // Введення номера завдання
    cout << "Select task. (1-3)\n";
    cin >> menu;
    if (cin){
    switch(menu) {
    case 1: task1(); break; // Виклик завдання If25
    case 2: task2(); break; // Виклик завдання If16
    case 3: task3(); break; // Виклик геометричного завдання
    // Повідомлення про неправильний номер завдання
    default: cout << "Wrong input! (Only 1-3)\n";
    }
    }
    else {
        cout << "Wrong input!";
    }
    return 0;
}


