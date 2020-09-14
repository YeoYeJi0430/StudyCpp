#include <iostream>
using namespace std;

int main()
{
	/*
	double* rate;
	rate = new double;
	*rate = 3.141592;
	cout << *rate << endl;

	delete rate;
	*/
	auto_ptr<double>rate(new double);

	*rate = 3.141592;
	cout << *rate << endl;

	return 0;
}