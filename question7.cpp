#include <iostream>
using namespace std;

int main()
{
	float nbuser;
	float nbuser2;

	cout << "Saisir un premier nombre" << endl;
	cin >> nbuser;
	cout << "Saisir un deuxieme nombre" << endl;
	cin >> nbuser2;

	if (nbuser < 0 and nbuser2 < 0)
	{
		cout << "Le produit serat positif" << endl;
	}
	else if (nbuser > 0 and nbuser2 > 0)
	{
		cout << "Le produit sera positif" << endl;
	}
	else if (nbuser < 0 and nbuser2 > 0)
	{
		cout << "Le produit sera negatif" << endl;
	}
	else if (nbuser > 0 and nbuser2 < 0)
	{
		cout << "Le produit sera negatif" << endl;
	}
	
}