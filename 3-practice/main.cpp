#include <iostream>
#include <unordered_map>

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

        unordered_map<int, int> numbers;

        int num = -1;
        for (int i = 0; i < n ; i++)
        {
            if (!numbers[a[i]])
            {
                numbers[a[i]] = 1;
            }
            else
            {
                numbers[a[i]]++;
            }
            if(numbers[a[i]] >= 3)
            {
                num = a[i];
                break;
            }
        }

        cout << num << endl;
    }
    return 0;
}