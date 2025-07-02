#include <iostream>
using namespace std;

int cycleLength(int number)
{

    int count = 1;

    while (number != 1)
    {

        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = 3 * number + 1;
        }
        count++;
    }
    return count;
}

int maxCycleLength(int a, int b)
{
    int maxLength = 0;

    if (a > b)
    {
        int newA = b;
        b = a;
        a = newA;
    }

    for (int i = a; i <= b; i++)
    {
        int l = cycleLength(i);
        if (l > maxLength)
        {
            maxLength = l;
        }
    }

    return maxLength;
}

int main()
{
    int x, y;

    while (cin >> x >> y)
    {
        cout << x << " " << y << " " << maxCycleLength(x, y) << endl;
    }
    return 0;
}

