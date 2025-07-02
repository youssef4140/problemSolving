#include <iostream>

using namespace std;

int main()
{
    int a[3][3];

    bool o[3][3] = {
        {1, 1, 1},
        {1, 1, 1}, 
        {1, 1, 1}
    };

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
        
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if(a[i][j] % 2 == 1)
            {
                o[i][j] = !o[i][j];
                if(i > 0) 
                {
                    o[i-1][j] = !o[i-1][j];
                }
                if(i < 2)
                {
                    o[i+1][j] = !o[i+1][j];

                }
                if( j > 0)
                {
                    o[i][j-1] = !o[i][j-1];
                }
                if(j < 2)
                {
                    o[i][j+1] = !o[i][j+1];

                }
            }
        }
    }


    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << o[i][j];
        
        }
        cout << endl;
    }

}