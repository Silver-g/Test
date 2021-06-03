#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	string s;
	char c;
	cin >> c;
		cin >> s;
	bool naideno = false;
	int nomer = 0;
	for (i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			nomer = i;
			naideno = true;
			break;
		}
	}
	if (naideno) {
		cout << nomer;
	}
	else {
		cout << "NO !";
	}
	return 0;
}