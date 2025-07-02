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

    int l, r;
    cin >> l >> r;

    for (int i = l - 1; i <= r - 1; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}