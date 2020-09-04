#include <iostream>
using namespace std;

int main()
{
    int A = 6;
    int B = 3;
    int C = 9;
    int tmp = 0;
    int tmp2 = 0;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << endl;

    tmp = C;
    tmp2 = B;
    C = A;
    B = C;
    C = tmp2;
    A = tmp;



    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    
}


