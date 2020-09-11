#include <iostream>
using namespace std;

int main()
{
	int tab1[8];
	tab1[0] = 4;
	tab1[1] = 8;
	tab1[2] = 7;
	tab1[3] = 9;
	tab1[4] = 1;
	tab1[5] = 5;
	tab1[6] = 4;
	tab1[7] = 6;

	int tab2[8];
	tab2[0] = 7;
	tab2[1] = 6;
	tab2[2] = 5;
	tab2[3] = 2;
	tab2[4] = 1;
	tab2[5] = 3;
	tab2[6] = 7;
	tab2[7] = 4;

	int tab3[8];
	tab3[0] = tab1[0] + tab2[0];
	tab3[1] = tab1[1] + tab2[1];
	tab3[2] = tab1[2] + tab2[2];
	tab3[3] = tab1[3] + tab2[3];
	tab3[4] = tab1[4] + tab2[4];
	tab3[5] = tab1[5] + tab2[5];
	tab3[6] = tab1[6] + tab2[6];
	tab3[7] = tab1[7] + tab2[7];

	for (int i = 0; i < 8; i++)
	{
		cout << tab3[i] << endl;
	}

}

	