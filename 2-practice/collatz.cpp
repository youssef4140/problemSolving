#include <iostream>

using namespace std;

int cycleLength(int A, int L)
{

    int count = 1;

    long long curr = A;

    while (curr != 1)
    {

        if (curr % 2 == 0)
        {
            curr = curr / 2;
        }
        else
        {
            curr = 3 * curr + 1;
            if (curr > L)
            {
                return count;
            }
        }
        count++;
    }
    return count;
}

int main()
{

    int A, L;

    int caseNum = 1;


    while (cin >> A >> L)
    {

        if (!(A < 0 || L < 0 || L < A || A == 0))
        {
            cout << "Case "<< caseNum <<": A = "<< A << ", limit = "<<L<<", number of terms = "<< cycleLength(A,L) << endl;
        }

        caseNum++;


    }
}