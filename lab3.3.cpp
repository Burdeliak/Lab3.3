#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double R; 
	double y;
	const double PI = 3.141592653589793238;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -7)
		y = R;
	else
		if (x > -7 && x <= -7 + R)
			y = sqrt(R * R - (x + 7) * (x + 7));
		else
			if (x > -7 + R && x <= -4)
				y = R;
			else
				if (x > -4 && x <= 0)
					y = (1.0 / 4.0) * (x + 4);
				else
					if (x >= 0 && x <= PI)
						y = sin(x);

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}