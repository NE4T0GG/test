#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int min, max;
	float x, h, y;
	cout << "Enter [min,max] and h\n";
	cin >> min >> max >> h;
	x = min;
	cout << "\tX" << "\tY(x)" << endl;
	while (x <= max + h / 2)
	{
		y = (x * x * x) + log(fabs(x)) - 3;
		cout << setw(7) << x << setw(7) << setprecision(3) << y << endl;
		x += h;
	}
	do
	{
		y = (x * x * x) + log(fabs(x)) - 3;
		cout << setw(7) << x << setw(7) << setprecision(3) << y << endl;
		x += h;
	} while (x <= max + h / 2);
}
