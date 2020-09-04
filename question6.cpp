#include <iostream>
using namespace std;

int main()
{
	float nbuser;

	cout << "Saisir un nombre" << endl;
	cin >> nbuser;

	if (nbuser < 0)
	{
		cout << "Le nombre est negatif" << endl;
	}
	else
	{
		cout << "Le nombre est positif" << endl;
	}
}
