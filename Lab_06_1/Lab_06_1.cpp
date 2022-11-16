// ІТЕРАЦІЙНИЙ СПОСІБ

#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <windows.h> 

using namespace std;

void Generator(int* r, const int n, const int Low, const int Hight)
{
    for (int i = 0; i < n; i++)
        r[i] = Low + rand() % (Hight - Low + 1);
}
void printGenerator(int* r, const int n)
{
    for (int i = 0; i < n; i++)
        cout << r[i] << "  ";
    cout << endl;
}


int Sum(int* r, const int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 4 != 0 && r[i] > 0)
            S += r[i];
    return S;
    cout << endl;
}
void Replace(int* r, const int n)
{
    for (int i = 0; i < n; i++)
        if (r[i] % 4 != 0 && r[i] > 0)
            r[i] = 0;

    cout << endl;
}

int Amount(int* r, const int n)
{
    int A = 0;
    for (int i = 0; i < n; i++)
        if (r[i] % 4 != 0 && r[i] > 0)
            A++;
    return A;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand((signed)time(NULL));
    const int n = 23;
    int r[n];
    int Low = -19;
    int Hight = 25;

    cout << "Масив з діапазону {-19, ..., 25}: " << endl;
    cout << endl;
    Generator(r, n, Low, Hight);
    printGenerator(r, n);
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Кількість елементів, які задовільняють умову = " << Amount(r, n);
    cout << "\n";
    cout << "Сума елементів, котрі задовільняють умову = " << Sum(r, n) << "\n";
    cout << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Масив, у якому числа, котрі задовільняють умову, замінені нулями: " << endl;
    Replace(r, n);
    printGenerator(r, n);
    cout << "--------------------------------------------------------------------------" << endl;

}
