#include <iostream>
using namespace std;

int main()
{
    const int raz = 10;
    int mass[raz] = { 15,20,45,4,551,641,74,1,9,25 };
    for (int i = 0; i < raz; i++)
    {
        cout << mass[i] << ' ';
        if (mass[i] % 2 == 0)
                cout << 0 << endl;
        else
            cout << mass[i] << endl;
    }
    return 0;
}