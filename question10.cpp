#include <iostream>
using namespace std;

int main()
{
	int nb = 0;

	do
	{
		cout << "Saisir un nombre" << endl;
		cin >> nb;

		if (nb < 10)
		{
			cout << "Plus grand!" << endl;
		}
		else if (nb > 20)
		{
			cout << "Plus petit!" << endl;
		}
	} while (nb < 10 or nb > 20);
}