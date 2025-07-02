#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        int n;

        char cc;
        cin >> cc >> cc >> n;

        long long a[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cin >> a[i][j];
            }
        }

        bool symmetric = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[n - 1 - i][n - 1 - j] != a[i][j] || a[i][j] < 0)
                {
                    symmetric = false;
                    break;
                }
             
            }
               if(!symmetric)
                {
                    break;
                }
        }

        cout << "Test #"<<tc<<": " <<(symmetric ? "Symmetric." : "Non-symmetric.") << endl;
        tc++;
    }
}