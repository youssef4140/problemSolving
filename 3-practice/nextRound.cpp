#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int prices[n];
        for (int i = 0; i < n; ++i) {
            cin >> prices[i];
        }

        int badDays = 0;
        int minPrice = prices[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            if (prices[i] > minPrice) {
                ++badDays;
            } else {
                minPrice = prices[i];
            }
        }

        cout << badDays << endl;
    }
}