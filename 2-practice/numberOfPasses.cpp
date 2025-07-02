#include <iostream>

using namespace std;

int numberOfPasses(int n, int k, int p)
{

    int ballWith = k;

    for (int i = 0; i < p; i++)
    {
        if (ballWith == n)
        {
            ballWith = 1;
        }
        else
        {
            ballWith++;
        }
    }
    return ballWith;
}

int main()
{

    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++)
    {

        int n, k, p;
        cin >> n >> k >> p;

        cout << "Case"<<" "<< i << ":" <<" "<< numberOfPasses(n, k, p) << endl;
    }

    return 0;
}