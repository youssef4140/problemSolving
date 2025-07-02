#include <iostream>

using namespace std;

int main()
{
    int N;
    int set = 1;

    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }

        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
        }

        int avg = sum / N;
        int moves = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] > avg)
            {
                moves += arr[i] - avg;
            }
        }
        cout << "Set #" << set << endl;
        cout << "The minimum number of moves is " << moves << "." << endl;
        cout << endl;
        set++;
    }

    return 0;
}