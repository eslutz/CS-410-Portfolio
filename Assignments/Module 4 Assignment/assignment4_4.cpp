#include<iostream>
using namespace std;

int main()
{
	long int bin, hex = 0, i = 1, remainder;

	cout << " Enter the binary number : " << endl;
	cin >> bin;

	while (bin != 0)
    {
		remainder = bin % 10;
		hex = hex + remainder * i; i = i * 2;
		bin = bin / 10;
	}

	cout << " Equivalent hexadecimal value : " << " " << hex << endl;

	return 0;
}
