#include <iostream>
using namespace std;

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{

    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; t++)
    {

        int m, n;
        cin >> m >> n;

        int arr[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int totalSum = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {


                int x = i-min(i,j);
                int y = j-min(i,j);

                int sumOne = 0;
                while (x < m && y < n)
                {
                    sumOne += arr[x][y];
                    x++;
                    y++;
                }


                x = i - min(i, n-1-j);
                y = j + min(i, n-1-j);
                
                int sumTwo = 0;
                while (x < m && y >= 0) {
                    sumTwo += arr[x][y];
                    x++;
                    y--;
                }

                if(sumOne+sumTwo-arr[i][j] > totalSum) totalSum = sumOne+sumTwo-arr[i][j];



            }
        }
        cout << totalSum<< endl;

    }
    return 0;
}
