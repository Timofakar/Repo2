#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a;
	b = a % 4;
	if (b == 0) {
		cout << "год високосный";
	else {
		cout << "год не високосный";
	}
	}