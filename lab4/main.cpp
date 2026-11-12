#include <iostream>
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
   // case 2: proc2(); break; // Виклик завдання Proc2
   // case 3: integer(); break; // Виклик завдання Integer
    // Повідомлення про неправильний номер завдання
    default: cout << "Wrong input! (Only 1-3)\n";}
    }
    else {
        cout << "Wrong input!";}
	return 0;
}

// Завдання 1 (Proc44)
void proc1(){
	double x1, y1, x2, y2, x3, y3;
	cout << "Enter triagle x1 - y1: ";
	if (!(cin >> x1 >> y1)){
		cout << "\nWrong input, only numbers!!!"; return;
	};
	cout << "\nEnter triagle x2 - y2: ";
	if (!(cin >> x2 >> y2)){
		cout << "\nWrong input, only numbers!!!"; return;
	};
	cout << "\nEnter triagle x3 - y3: ";
	if (!(cin >> x3 >> y3)){
		cout << "\nWrong input, only numbers!!!"; return;
	};
	double S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
	cout << "S of triagle = " << S;
}
