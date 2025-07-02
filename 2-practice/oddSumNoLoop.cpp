#include <iostream>
#include <cmath>

using namespace std;

bool isOdd(int n)
{
    if (n % 2 == 1)
        return true;
    return false;
}

int getNumberOfOddNumbersInRange(int a, int b)
{
    int x = 0;

    int n = 0;

    if (isOdd(a))
    {
        x = 1;
    }
    if (isOdd(b))
    {
        x = 1;
    }

    n = ((a - b) / 2) + x;

    return n;
}

int sumOfTwos(int n)
{
    return 2*(n * (n + 1) / 2);
}


int getSumOfOddNumbers(int a, int b)
{
    int n = getNumberOfOddNumbersInRange(a, b);
    int x = 0;
    if (isOdd(b))
    {
        x = b * n;
    }
    else
    {
        x = (b + 1) * n;
    }
    int twos = sumOfTwos(n - 1);
    x += twos;
    return x;
}



int main() {
    int T;
    cin >> T; 

    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a; 
        cin >> b;

        if (a < b)
        {
            int newA = b;
            b = a;
            a = newA;
        }
        
        cout << "Case " << i << ": " << getSumOfOddNumbers(a, b) << endl;
    }

    return 0;
}
