#include <iostream>
#include <string>
#include <algorithm> // For reverse function

using namespace std;

// Function to reverse a string
string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n;
    string str;

    while (cin >> n >> str) {
        if (n == 0) {
            break;
        }

        int substringLength = str.length() / n;
        string result = "";

        for (int i = 0; i < str.length(); i += substringLength) {
            // Extract a substring of length `substringLength`
            string substring = str.substr(i, substringLength);

            // Reverse the substring and append it to the result
            result += reverseString(substring);
        }

        cout << result << endl;
    }

    return 0;
}