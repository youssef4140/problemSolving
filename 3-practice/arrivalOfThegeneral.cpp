#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >>n;

    int a[n];

    int largestIndex = 0;
    int smallestIndex = 0;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] > a[largestIndex])
        {
            largestIndex = i;
        }
        if ( a[i] <= a[smallestIndex])
        {
            smallestIndex = i;
        }
    }

    int moves = largestIndex + (n - 1 -smallestIndex) - (largestIndex > smallestIndex);

    
    cout << moves << endl;
}

