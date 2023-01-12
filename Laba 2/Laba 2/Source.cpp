#include<iostream>
#include<conio.h>
#include< Windows.h >
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double Var, Var2, Var3, Var4, Var5, Var6, Var7;

    cout << "Ââåä³òü 3 ÷èñëà: ";
    cin >> Var >> Var2 >> Var3;
    Var4 = Var + Var2 + Var3;
    Var5 = Var * Var2 * Var3;
    Var6 = (Var + Var2 + Var3) / 3;


    cout << "Ñóìà: " << Var4 << "\n\Äîáóòîê: " << Var5 << "\n\Середнє арифметичне: " << Var6;

    return _getch();
}
