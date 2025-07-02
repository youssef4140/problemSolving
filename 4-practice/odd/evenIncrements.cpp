#include <iostream>
// #include <string>
// #include <cmath>
// #include <array>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; t++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
        }

        bool oddIndicesSameParity = true;
        bool evenIndicesSameParity = true;
        bool oddIndicesParity = a[0] % 2;
        bool evenIndicesParity = a[1] % 2;

        for( int i = 0; i < n; i++ )
        {
            if( i % 2 == 0 && a[i] % 2 != oddIndicesParity )
            {
                oddIndicesSameParity = false;
            }
            else if( i % 2 == 1 && a[i] % 2 != evenIndicesParity )
            {
                evenIndicesSameParity = false;
            }
        }

        cout << ((oddIndicesSameParity && evenIndicesSameParity) ? "YES" : "NO") << endl;
    }
    return 0;
}