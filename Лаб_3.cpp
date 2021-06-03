#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int matrica[3][3];
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++) {
			cout << "a" << i << j << endl;
			cin >> matrica[i][j];
		}
	}
	int det = matrica[0][0] * matrica[1][1] * matrica[2][2]
		- matrica[0][0] * matrica[1][2] * matrica[2][1]
		- matrica[0][1] * matrica[1][0] * matrica[2][2]
		+ matrica[0][1] * matrica[1][2] * matrica[2][0]
		+ matrica[0][2] * matrica[1][0] * matrica[2][1]
		- matrica[0][2] * matrica[1][1] * matrica[2][0];
	cout << "Детерминанта : " << det;
	return 0;
}
