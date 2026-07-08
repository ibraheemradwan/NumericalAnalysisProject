#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double bisection_cube(double a, double b, double tol, int maxIter) {
	double c, prev;
	int iter = 0;
	cout << "\nBisection (cube root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";
	c = (a + b) / 2;
	cout << iter << "\t\t" << c << "\t\t" << "-" << endl;
	prev = c;
	iter++;
	while (iter <= maxIter) {
		if ((c * c * c) + 3 < 0)
		{
			a = c;
		}
		else if ((c * c * c) + 3 > 0)
		{
			b = c;
		}
		c = (a + b) / 2;
		double err = fabs((c * c * c) + 3);
		cout << iter << "\t\t" << setprecision(10) << c << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		prev = c;
		iter++;
	}
	return c;
}
double newton_cube(double x0, double tol, int maxIter) {
	double x1;
	int iter = 0;
	cout << "\nNewton (cube root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";

	cout << iter << "\t\t" << x0 << "\t\t" << "-" << endl;
	iter++;
	while (iter <= maxIter) {
		if (3 * x0 * x0 == 0) {
			cout << "Derivative zero, stop\n";
			break;
		}
		x1 = x0 - ((x0 * x0 * x0) + 3) / (3 * (x0 * x0));
		double err = fabs(x1 - x0);
		cout << iter << "\t\t" << setprecision(10) << x1 << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		x0 = x1;
		iter++;
	}
	return x1;
}
double fixed_cube(double x0, double tol, int maxIter) {
	double x1;
	int iter = 0;
	cout << "\nFixed Point (cube root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";
	cout << iter << "\t\t" << x0 << "\t\t" << "-" << endl;
	iter++;
	while (iter <= maxIter) {
		x1 = ((2 * x0) / 3) - (1 / (x0 * x0));
		double err = fabs(x1 - x0);
		cout << iter << "\t\t" << setprecision(10) << x1 << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		x0 = x1;
		iter++;
	}
	return x1;
}
double bisection_fourth(double a, double b, double tol, int maxIter) {
	double c, prev;
	int iter = 0;
	cout << "\nBisection (fourth root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";
	c = (a + b) / 2;

	cout << iter << "\t\t" << c << "\t\t" << "-" << endl;
	prev = c;
	iter++;
	while (iter <= maxIter) {
		if ((c * c * c * c) - 3 < 0)
		{
			a = c;
		}
		else if ((c * c * c * c) - 3 > 0)
		{
			b = c;
		}
		c = (a + b) / 2;
		double err = fabs((c * c * c * c) - 3);
		cout << iter << "\t\t" << setprecision(10) << c << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		prev = c;
		iter++;
	}
	return c;
}
double newton_fourth(double x0, double tol, int maxIter) {
	double x1;
	int iter = 0;
	cout << "\nNewton (fourth root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";
	cout << iter << "\t\t" << x0 << "\t\t" << "-" << endl;
	iter++;
	while (iter <= maxIter) {
		if (4 * x0 * x0 * x0 == 0) {
			cout << "Derivative zero, stop\n";
			break;
		}
		x1 = x0 - ((x0 * x0 * x0 * x0) - 3) / (4 * (x0 * x0 * x0));
		double err = fabs(x1 - x0);
		cout << iter << "\t\t" << setprecision(10) << x1 << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		x0 = x1;
		iter++;

	}
	return x1;
}
double fixed_fourth(double x0, double tol, int maxIter) {
	double x1;
	int iter = 0;
	cout << "\nFixed Point (fourth root):\n";
	cout << "Iter\t\tValue\t\t\tError\n";
	cout << iter << "\t\t" << x0 << "\t\t" << "-" << endl;
	iter++;
	while (iter <= maxIter) {
		x1 = (1 / (x0 * x0 * x0) + (2 * x0) / 3);
		double err = fabs(x1 - x0);
		cout << iter << "\t\t" << setprecision(10) << x1 << "\t\t" << err <<
			endl;
		if (err < tol)
			break;
		x0 = x1;
		iter++;
	}
	return x1;
}

int main() {
	double tol = 1e-3;
	int maxIterbi = 10;
	int maxIternewton = 100;
	int maxIterfixed = 7;
	cout << fixed << setprecision(6);
	cout << "=== Cube Root of -3 ===\n";
	double r;
	r = bisection_cube(-2, -1, tol, maxIterbi);
	cout << "Result = " << r << endl;
	r = newton_cube(-1.5, tol, maxIternewton);
	cout << "Result = " << r << endl;
	r = fixed_cube(-1.5, tol, maxIterfixed);
	cout << "Result = " << r << endl;

	int maxIterbi1 = 10;
	int maxIternewton1 = 100;
	int maxIterfixed1 = 9;
	cout << "\n=== Fourth Root of 3 ===\n";

	r = bisection_fourth(1, 2, tol, maxIterbi1);
	cout << "Result = " << r << endl;
	r = newton_fourth(1.5, tol, maxIternewton1);
	cout << "Result = " << r << endl;
	r = fixed_fourth(1.5, tol, maxIterfixed1);
	cout << "Result = " << r << endl;
	return 0;
}
