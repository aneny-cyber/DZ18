// DZ18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

using namespace std;

class Player 
{
private:
    string PlayerName;
    float PlayerPoint;
public:
    void SetPN() 
    {
        cout << "Write Players name -> ";
        cin >> PlayerName;
    }
    string GetPN() 
    {
        return PlayerName;
    }
    void SetPP() 
    {
        cout << "\n" << "Write Player point -> ";
        cin >> PlayerPoint;
    }
    float GetPP() 
    {
        return PlayerPoint;
    }
};

void Insertionsort(Player* First, int MSize) {
    double LeftPoint = First[0].GetPP();
    double LastPoint = First[MSize - 1].GetPP();
    for (int i = 1; i < MSize; i++) {
        int j = i;
        while (j > 0 && (First[j - 1].GetPP()) < (First[j].GetPP())){
            swap(First[j - 1], First[j]);
            j--;
        }
    }
}


int main()
{
    int Size;
    cout << "\n" << "Enter size ";
    cin >> Size;
    Player* MassPlayers = new Player[Size];
    for (int i = 0; i < Size; i++) 
    {
        MassPlayers[i].SetPN();
        MassPlayers[i].SetPP();
    }
    Insertionsort(MassPlayers, Size);
    for (int i = 0; i < Size; i++)
    {
        cout << MassPlayers[i].GetPN() << "\n" << MassPlayers[i].GetPP() << "\n";
    }
    delete[] MassPlayers; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
