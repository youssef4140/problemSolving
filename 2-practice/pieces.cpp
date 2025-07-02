#include <iostream>
#include <cmath>

using namespace std;

long long pieces(long long n)
{
    return (n * (n + 1) / 2) + 1;
}

int main()
{
    long long n;

    while (cin >> n)
    {
        if (!(n < 0))
        {

            cout << pieces(n) << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}

// 932072513