#include <iostream>
using namespace std;

int main()
{
	int x, y, rows, z;

	cout << " Enter number of rows\n " << endl;
	cin >> rows;

	z = rows - 1;

	for (x = 1; x <= rows; x++)
    {
		for (y = 1; y <= z; y++)
        {
			cout << " ";
        }
		z--;

		for (y = 1; y <= (2 * x - 1); y++)
        {
			cout << "*";

        }
		cout << endl;
	}
	z = 1;

	for (x = 1; x <= (rows - 1); x++)
    {
		for (y = 1; y <= z; y++)
        {
			cout << " ";
        }
		z++;

		for (y = 1; y <= (2 * (rows - x) - 1); y++)
        {
			cout << "*";
        }
		cout << endl;

	}
	cout << endl;

	return 0;
}
