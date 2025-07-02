#include <iostream>

using namespace std;

bool movesLinearly(int x1, int y1, int x2, int y2)
{
    return (x1 == x2 || y1 == y2);
}

bool movesDiagonally(int x1, int y1, int x2, int y2)
{
    return ((x1 - y1 == x2 - y2) || (x1 + y1 == x2 + y2));

}

int numberOfMoves(int x1, int y1, int x2, int y2)
{
    if (x1 == x2 && y1 == y2)
    {
        return 0;
    }

    if (movesLinearly(x1, y1, x2, y2) || movesDiagonally(x1, y1, x2, y2))
    {
        return 1;
    }

    return 2;
}

int main()
{

    int x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        if (!(x1 < 1 || x1 > 8 || x2 < 1 || x2 > 8 || y1 < 1 || y1 > 8 || y2 < 1 || y2 > 8))

            cout << numberOfMoves(x1, y1, x2, y2) << endl;
        }
}