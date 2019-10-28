/* 2019-W02-Exercise_3_4.cpp :

Exercise 3.4
Berechnen Sie die Fakult�t von n (n!) mit Hilfe einer Schleife

D�niel Sz�ke (11913915)
24.10.2019

*/

#include <iostream>
//#include <cmath>
//#include <exception> 

using namespace std;




int main()
{
	unsigned int n;
	unsigned long long factorial = 1;

	cout << "Dieses programm gibt die Fakultaet von n aus.\n";
	cout << "Geben Sie hier einen positiven Integer-Wert ein (n>1): ";	cin >> n;
	//Check n value
	if (n < 1)
		throw("n muss ein positiver Integer sein (n>1)");
	
	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}
	
	cout << "Fakultaet von n " << n << " = " << factorial << endl;

	return 0;
}
