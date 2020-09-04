#include <iostream>
using namespace std;

int main()
{
    int A = 6;
    int B = 3;
    int tmp = 0;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << endl;

    tmp = A;
    A = B;
    B = tmp;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

}
