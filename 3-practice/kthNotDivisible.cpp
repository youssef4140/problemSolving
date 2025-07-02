#include <iostream>
#include <string>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;
    int n, k;
    for (int j = 0; j < testCases; j++)
    // while(cin >> n >> k)
    {
        cin >> n >> k;

        int i = 0;

        int counter = 0;
        while (true)
        {
            i++;

            if (i != 0 && i % n != 0)
            {
                counter++;
                cout << "Current number : " << i << " " << "Current count : " << counter << endl;
            }

            // cout << "Current number : " << i << " " << "Current count : " << counter << endl;
            if (counter == k)
                break;
        }
        // cout << i << endl;

        // cin >> n,a;

        // cout << n % a << endl;
    }
    return 0;
}