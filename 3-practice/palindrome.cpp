#include <iostream>


using namespace std;

char toLower(char c)
{
    if (int(c) < 97)
    {
        return char(int(c) + 32);
    }
    return c;
}

int main() {
    string input;
    while (true) {
        getline(cin, input); 
        if (input == "DONE") {
            break; 
        }
        string str;
        for(char c : input)
        {
            if(c != '.' && c!=',' && c!='!' && c!='?' && c!=' ')
            {
                str += toLower(c);
            }
        }
        string reversedStr;

        for( int i = str.size() - 1; i>=0; i--)
        {
            reversedStr += str[i];
        }

        if (str == reversedStr) {
            cout << "You won't be eaten!" << endl;
        } else {
            cout << "Uh oh.." << endl;
        }
    }
    return 0;
}
