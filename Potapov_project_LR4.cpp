#include <iostream>
#include <cmath>
using namespace std;

void Task1(){
    //developing...
}
void Task2(double x, double y){
    double difference = x - y;
    double integerPart = floor(difference); 
    cout << "Целая часть разности x - y: " << integerPart << endl;
}

void Task3(){
    //developing...
}

int main(){
    double x = 0.0;
    double y = 0.0;
    int choice;
    do{
        cout << "Меню: " << endl;
        cout << "1. Ввод вещественных чтсел x и y" << endl;
        cout << "2. Нахождение целой части разности этих 2-х чисел." << endl;
        cout << "3. Нахождение дробной части разности этих 2-х чисел." << endl;
        cout << "0. Выход из программы. "  << endl;
        cout << "Ваш выбор: " << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                Task1(x, y);
                break;
            case 2:
                Task2(x, y);
                break;
            case 3:
                Task3(x, y);
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    }while(choice != 0);

return 0;
}