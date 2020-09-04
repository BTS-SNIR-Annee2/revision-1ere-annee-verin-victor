#include <iostream>
using namespace std;

int main()
{
	float HT;
	float tva;
	float TTC;
	int nbarticle;

	cout << "Saisir le nombre d'article" << endl;
	cin >> nbarticle;
	cout << "Saisir prix HT" << endl;
	cin >> HT;
	cout << "Saisir tva (en %)" << endl;
	cin >> tva;

	TTC = HT + (HT / 100 * tva);
	TTC = TTC * nbarticle;

	cout << "Le prix TTC est de " << TTC << " euros avec une tva a " << tva << "% et un prix HT de " << HT << " euros, pour " << nbarticle << " article" << endl;

