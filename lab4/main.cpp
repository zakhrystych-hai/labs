#include <iostream>
#include <cmath>
using namespace std;
void task1();
void task2();
void task3();

int main(){
	int menu;
    // Введення номера завдання
    cout << "Select task. (1-3)\n";
    cin >> menu;
    if (cin){
    switch(menu) {
    case 1: task1(); break; // Виклик завдання Proc1
   	case 2: task2(); break; // Виклик завдання Proc2
    case 3: task3(); break; // Виклик завдання Integer
    // Повідомлення про неправильний номер завдання
    default: cout << "Wrong input! (Only 1-3)\n";}
    }
    else {
        cout << "Wrong input!";}
	return 0;
}

// Завдання 1 (Proc44)
void task1(){
	double x1, y1, x2, y2, x3, y3; // Оголошення змінних координат вершин трикутника
	cout << "Enter triagle x1 - y1: ";
    // Введення координат першої вершини
	if (!(cin >> x1 >> y1)){ 
		cout << "\nWrong input, only numbers!!!"; return;
	};
    // Введення координат другої вершини
	cout << "\nEnter triagle x2 - y2: ";
	if (!(cin >> x2 >> y2)){
		cout << "\nWrong input, only numbers!!!"; return;
	};
    // Введення координат третьої вершини
	cout << "\nEnter triagle x3 - y3: ";
	if (!(cin >> x3 >> y3)){
		cout << "\nWrong input, only numbers!!!"; return;
	};
     // Обчислення площі трикутника за координатами вершин
	double S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
	cout << "S of triagle = " << S; // Виведення обчисленої площі
}
// Завдання 2 (Proc8)
void task2() {
    int K, D1, D2;
    // Введення числа K
    cout << "\nEnter K: ";
    if (!(cin >> K) || K <= 0) {
        cout << "Wrong input!";
        return;
    }
    // Введення цифри D1
    cout << "Enter D1: ";
    if (!(cin >> D1) || D1 < 0 || D1 > 9) {
        cout << "Wrong input!";
        return;
    }
    // Введення цифри D2
    cout << "Enter D2: ";
    if (!(cin >> D2) || D2 < 0 || D2 > 9) {
        cout << "Wrong input!";
        return;
    }
    // Процедура додавання цифри справа
    auto AddRightDigit = [](int D, int &K) {
        K = K * 10 + D;
    };
    // Послідовне додавання цифр
    AddRightDigit(D1, K);
    cout << "Result 1: " << K << endl;
    AddRightDigit(D2, K);
    cout << "Result 2: " << K << endl;
}

 // Завдання 3. Integer10
// Функція введення числа з перевіркою коректності
bool in_n(int &n){
    cout << "\nEnter three-digit number: ";
    if (!(cin >> n) || n < 100 || n > 999){
        cout << "Wrong input!";
        return false;
    }
    return true;
}

// Функція підрахунку результату
void calc_digits(int n, int &last, int &middle){
    // Знаходимо останню цифру
    last = n % 10;
    // Знаходимо середню цифру
    middle = (n / 10) % 10;
}

// Функція виведення результату
void out_res(int last, int middle){
    cout << last << " " << middle << endl;
}

// Завдання 3. Integer10
// Функція введення числа з перевіркою коректності
int in_n(){
    int n;
    cout << "\nEnter three-digit number: ";
    if (!(cin >> n) || n < 100 || n > 999){
        cout << "Wrong input!";
        return 0;
    }
    return n;
}

// Функція підрахунку результату
int calc_digits(int n){
    // Знаходимо останню цифру
    int last = n % 10;
    // Знаходимо середню цифру
    int middle = (n / 10) % 10;
    // Об'єднуємо цифри в одне число
    return last * 10 + middle;
}

// Функція виведення результату
void out_res(int res){
    cout << res / 10 << " " << res % 10 << endl;
}

// Основна процедура завдання 3
void task3(){
    // Введення та перевірка числа
    int n = in_n();
    if (n == 0){
        return;
    }

    // Підрахунок результату
    int res = calc_digits(n);

    // Виведення результату
    out_res(res);
}
