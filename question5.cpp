#include <iostream>
using namespace std;

int main()
{
	float HT;
	float tva;
	float TTC;

	cout << "Saisir prix HT" << endl;
	cin >> HT;
	cout << "Saisir tva (en %)" << endl;
	cin >> tva;

	TTC = HT + (HT / 100 * tva);

	cout << "Le prix TTC est de " << TTC << " euros avec une tva a " << tva << "% et un prix HT de " << HT << " euros" << endl;

}
