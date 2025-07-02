#include <iostream>

using namespace std;



string checkQuadrangle(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
    {
        return "banana";
    }
    else if (a == b && b == c && c == d)
    {
        return "square";
    }
    else if ((a == c && b == d) || (a == b && c == d) || (a == d && b == c))
    {
        return "rectangle";
    }
    else if (a + b + c > d && a + b + d > c && a + c + d > b && b + c + d > a)
    {
        return "quadrangle";
    }
    return "banana";
}

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        unsigned int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << checkQuadrangle(a, b, c, d) << endl;
    }
}
