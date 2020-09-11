#include <iostream>
using namespace std;

int main()
{
	int nb = 0;
	int nb2 = 0;
	int position = 0;

	for (int i = 1; i < 21; i++)
	{
		cout << "Saisir nombre " << i << endl;
		cin >> nb2;

		if (nb2 > nb)
		{
			nb = nb2;
			position = i;
		}

	}
	
	cout << "Le nombre le plus grand est: " << nb << " en position " << position << endl;
}