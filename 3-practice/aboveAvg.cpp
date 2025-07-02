#include <iostream>
#include <sstream> 
#include <iomanip>


using namespace std;

string pad(double num) {
    ostringstream oss;
    oss << fixed << setprecision(3);
    oss << num;
    return oss.str();
}

int main()
{
    int testCases;
    int n;
    cin >> testCases;
    
    while (testCases--)
    {
        cin >> n;
        int a[n];

        double sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        double avg = sum / n;


        double aboveAvgCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg)
            {
                aboveAvgCount++;
            }
        }

        double per = (aboveAvgCount/n)*100;

        cout << pad(per)<<'%' <<endl;


    }
}
