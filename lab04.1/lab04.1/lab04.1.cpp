#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 0;
	i = k;
	while (i <= N)
	{
		P += (pow(sin(k) * sin(k) + cos(N / k) * cos(N / k), 1. / 2));
		i++;
	}
	cout << P << endl;
	P = 0;
	i = k;
	do {
		P += (pow(sin(k) * sin(k) + cos(N / k) * cos(N / k), 1. / 2));
		i++;
	} while (i <= N);
	cout << P << endl;
	P = 0;
	for (i = k; i <= N; i++)
	{
		P += (pow(sin(k) * sin(k) + cos(N / k) * cos(N / k), 1. / 2));
	}
	cout << P << endl;
	P = 0;
	for (i = N; i >= k; i--)
	{
		P += (pow(sin(k) * sin(k) + cos(N / k) * cos(N / k), 1. / 2));
	}
	cout << P << endl;
	return 0;
}