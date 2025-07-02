#include <iostream>
using namespace std;

int abs(int n)
{
    if(n<0) return -1 * n;
    return n;
}

int getAscii(char c)
{
    return int(c);
}


int asciiDif(string wordOne,string wordTwo,int length)
{
    int totalDif = 0;
    for(int i = 0;i<length;i++)
    {
        totalDif += abs(getAscii(wordOne[i]) - getAscii(wordTwo[i]));
    }
    return totalDif;
}

int main()
{

    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; t++)
    {

        int numOfWords,lengthOfWord;

        cin >> numOfWords >> lengthOfWord;

        string a[numOfWords];



        for(int w = 0; w < numOfWords; w++)
        {
            cin >> a[w]; 

        }

        int min = -1;
        

        for(int i = 0; i < numOfWords; i++)
        {

            for(int j = i + 1; j < numOfWords; j++)
            {

                int dif = asciiDif(a[i],a[j],lengthOfWord);

                if(dif < min || min < 0)
                {
                    min = dif;
                }
            }
        }

        cout << min <<endl;
        
        
       
    }
    return 0;
}
