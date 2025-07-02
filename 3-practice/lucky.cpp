#include <iostream>
// #include <string>
// #include <cmath>
// #include <array>
using namespace std;

int sumOfLastThreedigits(int n)
{
    int sum = 0;
    int r = 10;


    for(int i = 0; i < 3; i++)
    {
    int remainder = n % r;

        if (n == 0)
            break;
        sum += remainder;
        // n -= remainder;
        n /= 10;
        // r *= 10;
        // cout << "Current number : " << n << " " << "Current sum : " << sum << endl;
        // cout << "Current remainder : " << remainder << endl;
    } 
 
    return sum;
}



int main()
{

    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; t++)
    {
        int n;
        cin >> n;

        cout << ((sumOfLastThreedigits(n) == sumOfLastThreedigits(n/1000))?"YES":"NO") << endl;



    }
    return 0;
}