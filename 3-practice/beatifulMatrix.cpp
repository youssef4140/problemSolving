#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int matrix[5][5];

    int oneAt[2] = {0, 0}; ;
    int mid[2] = {2, 2};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneAt[0] = i;
                oneAt[1] = j;
            }
        }
    }

    cout << abs(oneAt[0] - mid[0]) + abs(oneAt[1] - mid[1]) << endl;

    
}