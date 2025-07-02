#include <iostream>
#include <stack>
#include <string>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(); 

    for ( int i = 0; i < n; i++ ) {
        string line;
        getline(cin, line);
        stack<char> s;

        bool balanced = true;

        for ( char c : line)
        {
            if(c == '(' || c == '[')
            {
                s.push(c);
            }

            else if ( c == ')')
            {
                if ( s.empty() || s.top() != '(')
                {
                    balanced = false;
                    break;
                }
                s.pop();
                
            }
            else if ( c == ']')
            {
                if ( s.empty() || s.top() != '[')
                {
                    balanced = false;
                    break;
                }
                s.pop();
            }
        }
        if (balanced && s.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        
    }
}
