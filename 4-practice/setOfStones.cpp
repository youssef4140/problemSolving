#include <iostream>

using namespace std;



int main()
{
    int n;
    string line;
    cin >> n;
    cin >> line;

    int count = 0;
    for (int i = 1; i < line.size(); ++i) {
        if(line[i] == line[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
}
