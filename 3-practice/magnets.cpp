#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int groups = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            continue;
        }
        if (arr[i] != arr[i - 1])
        {
            groups++;
        }
    }
    cout << groups << endl;
}