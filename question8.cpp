#include <iostream>
using namespace std;

int main()
{
	float nbuser;
	float nbuser2;
	float resultat;

	cout << "Saisir un premier nombre" << endl;
	cin >> nbuser;
	cout << "Saisir un deuxieme nombre" << endl;
	cin >> nbuser2;

	resultat = nbuser * nbuser2;

	if (resultat == 0 )
	{
		cout << "Le produit est nul" << endl;
	}
	else if (resultat > 0)
	{
		cout << "Le produit est positif" << endl;
	}
	else if (resultat < 0 )
	{
		cout << "Le produit est negatif" << endl;
	}
}