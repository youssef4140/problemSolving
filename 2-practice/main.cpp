#include <iostream>
#include <string>
using namespace std;



int main()
{

    

    int n, m, a;

    cin >> n >> m >> a;

    int horizontal = n / a;

    int vertical = m / a;
    if (n % a) horizontal++;

    if (m % a) vertical++;

    cout << horizontal * vertical << endl;
    return 0;
}