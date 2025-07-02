#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
                if (b[j] < b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && k > 0)
            {
                sum += b[i];
                k--;
            }
            else
            {
                sum += a[i];
            }
        }

        cout << sum << endl;
    }
}