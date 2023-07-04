#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int n=0;
    
    for(int i = 0; i < word.length(); i++)
    {
        if(word[i] != word[word.length()-1-i])
        {
            cout<<"0";
            return 0;
        }
    }
    
    cout << "1";
    
    
}