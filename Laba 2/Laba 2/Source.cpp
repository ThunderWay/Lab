#include<iostream>
#include<conio.h>
#include< Windows.h >
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double Var, Var2, Var3, Var4, Var5, Var6, Var7;

    cout << "������ 3 �����: ";
    cin >> Var >> Var2 >> Var3;
    Var4 = Var + Var2 + Var3;
    Var5 = Var * Var2 * Var3;
    Var6 = (Var + Var2 + Var3) / 3;


    cout << "����: " << Var4 << "\n\�������: " << Var5 << "\n\������ �����������: " << Var6;

    return _getch();
}