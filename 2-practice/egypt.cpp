#include <iostream>
#include <cmath>

using namespace std;

int sqr(int x)
{
    return x * x;
}

int pythagorean(int x, int y, int z)
{
    return (sqr(x) + sqr(y) == sqr(z)) || (sqr(x) + sqr(z) == sqr(y)) || (sqr(y) + sqr(z) == sqr(x));
}

string checkIfRightAngled(int x, int y, int z)
{
    if (pythagorean(x, y, z))
    {
        return "right";
    }
    else
    {
        return "wrong";
    }
}

int main()
{
    double x, y, z;

    while (cin >> x >> y >> z)
    {
        if (x == 0 && y == 0 && z == 0)
            break;

        cout << checkIfRightAngled(x, y, z) << endl;
    }
    return 0;
}