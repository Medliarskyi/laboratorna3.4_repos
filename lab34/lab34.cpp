// lab34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double R;
	double x; // вхідний аргумент
	double y; // вхідний параметр


	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (!(x <= y && y <= -x) && (pow(y, 2) <= (pow(R, 2) - pow(x, 2))) || (-R <= x && x <= 0 && -R <= y && y <= R) && !(x <= y && y <= -x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
