#include <iostream>
#include <string>
using namespace std;

int main()
{

    int testCases;
    cin >> testCases;
    int n;
    for (int i = 0; i < testCases; i++)
    {

        cin >> n;
        int r = 10;

        int counter = 0;

        string str = "";

        while (n)
        {
            int remainder = n % r;

            if (remainder)
            {
                str += to_string(remainder) + " ";

                counter++;
            }

            n -= remainder;
            r *= 10;
        }
        cout << endl;
        cout << counter << endl;
        cout << str << endl;
    }
    return 0;
}