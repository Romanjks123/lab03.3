// Lab_03_3.cpp
// < Огоновський Роман >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 24



#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x= "; cin >> x;
	cout << "R= "; cin >> R;

	if (x <= -R)
		y = (R / (R - 6) * (x + 6));
	else
		if (-R < x && x <= R * 2)
			y = sqrt((R * R) - (x * x));
		else
			if (R < x && x <= R * 2)
				y = R;
			else
				y = R;
	cout << endl;
	cout << "y= " << y << endl;

	cin.get();
	return 0;


}