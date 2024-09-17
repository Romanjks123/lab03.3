// -бескінечність < 6 <= -R  x1= -6  y1= 0   x2=0  y=-R
// -R < x <= R           x0=R  y0=-R
// R < x <= 2R          x1=R y1=0   x2=2R   y2=R
// 2R < x < бескінечність  y=R










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