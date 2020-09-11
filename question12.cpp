#include <iostream>
using namespace std;

int main()
{
	int nb = 0;


	cout << "Saisir nombre" << endl;
	cin >> nb;

	for (int i = 0; i < 10; i++)
	{
		nb++;
		cout << nb << endl;
	}
}