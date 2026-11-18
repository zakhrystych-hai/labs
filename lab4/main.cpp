#include <iostream>
#include <cmath>
using namespace std;
void proc1();
void proc2();
void integer();

int main(){
	int menu;
    // Введення номера завдання
    cout << "Select task. (1-3)\n";
    cin >> menu;
    if (cin){
    switch(menu) {
    case 1: proc1(); break; // Виклик завдання Proc1
   	case 2: proc2(); break; // Виклик завдання Proc2
   case 3: integer(); break; // Виклик завдання Integer
    // Повідомлення про неправильний номер завдання
    default: cout << "Wrong input! (Only 1-3)\n";}
    }
    else {
        cout << "Wrong input!";}
	return 0;
}

// Завдання 1 (Proc44)
void proc1(){
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
void proc2() {
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
void integer(){
	int n;
    cout << "\nEnter three-digit number: ";
    if (!(cin >> n) || n < 100 || n > 999){
   	    cout << "Wrong input!";
        return;
   }// Вводимо тризначне число
    // Знаходимо останню цифру
    int last = n % 10;
    // Ділимо число на 10
    int middle = (n / 10) % 10;
    // Виводимо спочатку останню, а потім середню цифру
    cout << last << " " << middle << endl;
}

