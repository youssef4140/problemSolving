#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x--;

        int left = y - 1;
        int right = a[x] - left - 1;
        if (x - 1 >= 0)
            a[x - 1] += left;
        if (x + 1 <= n - 1)
            a[x + 1] += right;
        a[x] = 0;

    }

    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
