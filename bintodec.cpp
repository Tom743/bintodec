#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string binAsDec;	
	cout << "Numero en binario: ";
	cin >> binAsDec;
	cout << endl;
	unsigned long long int dec=0;
	int s = binAsDec.size();
	for (int i = 0; i < s; i++)
	{
		if (binAsDec[i]=='1')
		{
			int exp = s-i-1;
			unsigned long long int bit = pow(2, exp); 
			dec+=bit;
			cout << "2^"+to_string(exp)+": "+to_string(bit) << endl;
		}
	}
	cout << "\nNumero en decimal: " << dec << endl;
#ifdef _WIN32
	system("pause");
#endif

	return 1;
}