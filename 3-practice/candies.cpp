#include <iostream>
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

        int min = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
        }

        int candies = 0;
        for (int i = 0; i < n; i++)
        {
            candies += a[i] - min;
        }
        cout << candies << endl;

    }
    return 0;
}