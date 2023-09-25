#include <iostream>
using namespace std;

int main()
{
    int answer;

    for (int x = 1; x <= 9; x++)
    {
        for (int y = 1; y <= 9; y++)
        {
            answer = x * y;
            cout << x << " * " << y << " = " << answer << endl;
        }
    }

    return 0;
}
