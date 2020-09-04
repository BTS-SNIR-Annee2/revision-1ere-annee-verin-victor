#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "Saisir age" << endl;
	cin >> age;

	if (age > 5 and age < 8)
	{
		cout << "Poussin" << endl;
	}
	else if (age > 7 and age < 10)
	{
		cout << "Pupille" << endl;
	}
	else if (age > 9 and age < 12)
	{
		cout << "Minime" << endl;
	}
	else if (age > 11)
	{
		cout << "Cadet" << endl;
	}
}