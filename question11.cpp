#include <iostream>
using namespace std;

int main()
{
	int nb = 0;
	int i = 0;

	cout << "Saisir nombre" << endl;
	cin >> nb;

	while  (i < 10)
	{
		nb++;
		i++;
		cout << nb << endl;
	}
}