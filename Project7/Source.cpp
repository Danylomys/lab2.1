#include <iostream>

using namespace std;

int main()
{
	double a;
	double z1;
	double z2;

	cout << "Angle Alpha: "; cin >> a;

	z1 = 1 - 1. / 4 * pow(sin(2*a),2)+cos(2*a);
	z2 = pow(cos(a), 2) + pow(cos(a), 4);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
