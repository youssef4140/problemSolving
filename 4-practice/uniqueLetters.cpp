#include <iostream>

using namespace std;



int main()
{
    string line;

    getline(cin, line);

    int frequency[26] = {0};
    int uniqueCount = 0;

    for (char c : line) {
        if (isalpha(c)) {
            frequency[tolower(c) - 'a']++;
            if(frequency[tolower(c) - 'a'] == 1) {
                uniqueCount++;
            }
        }
    }
    cout << uniqueCount << endl;
}
