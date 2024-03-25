#include <iostream>
#include "MathFunc.h"

using namespace std;

int main()
{
    int one;
    int two;
    int Oper;
    cout << "Введите число: ";
    cin >> one;
    cout << "Введите второе число: ";
    cin >> two;
    cout << "Введите операцию: (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):" << endl;
    cin >> Oper;

    if (Oper == 1)
        cout << one << " прибавить к " << two << " = " << Sum(one, two) << endl;

    else if (Oper == 2)
        cout << one << " вычесть из " << two << " = " << Subtr(one, two) << endl;

    else if (Oper == 3)
        cout << one << " умножить на " << two << " = " << Mult(one, two) << endl;

    else if (Oper == 4)
        cout << one << " разделить на " << two << " = " << Div(one, two) << endl;

    else if (Oper == 5)
        cout << one << " в степени " << two << " = " << pow(one, two) << endl;
}
