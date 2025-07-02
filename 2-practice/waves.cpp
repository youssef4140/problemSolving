#include <iostream>

using namespace std;

int abs(int n)
{
    if (n < 0)
        return -1 * n;
    return n;
}

bool isOdd(int n)
{
    if (n % 2 == 1)
        return true;
    return false;
}

string concat(int n)
{
    string str = "";
    for (int i = 1; i <= n; i++)
    {
        str += to_string(n);
    }
    return str;
}

void printWave(int A)
{

    int i = (A * 2);

    if (isOdd(A))
    {
        i--;
    }

    for (int j = 0; j < i; j++)
    {
        string height = concat(A - abs(A - abs(j - i)));
        if (height.empty())
        {
            continue;
        }
        cout << concat((A - abs(A - abs(j - i)))) << endl;
    }
}

void printMultipleWaves(int A, int F)
{
    for (int i = 1; i <= F; i++)
    {
        printWave(A);
        if (i != F)
        {
            cout << endl;
        }
    }
}

int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 0; i < testCases; i++) {
        int A, F;
        
        if (i > 0) {
            cout << endl;
        }
        
        cin >> A >> F;
        
        printMultipleWaves(A, F);
    }
    
    return 0;
}
