#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double chunk(double n, double k)
{
    return ceil(k / (n - 1));
}

double firstNumberInChunk(double n, double k)
{
    return chunk(n, k)*n - n+1 ;
}

double orderOfFirstNumberInChunk(double n, double k)
{
    return firstNumberInChunk(n, k) - chunk(n, k) + 1;
}

long long number(double n, double k)
{
    return  firstNumberInChunk(n, k) + k - orderOfFirstNumberInChunk(n, k);
}

int main()
{

    int n, k;
    int testCases;
    cin >> testCases;
    for (int j = 0; j < testCases; j++)
    {

        cin >> n >> k;

        cout << number(n, k) << endl;
        
    }

    return 0;
}