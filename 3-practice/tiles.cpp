#include <iostream>
#include <string>
using namespace std;


int main()
{

    

    long long n, m, a;

    cin >> n >> m >> a;

    long long horizontal = n / a;

    long long vertical = m / a;
    if (n % a) horizontal++;

    if (m % a) vertical++;

    cout << horizontal * vertical << endl;
    return 0;
}