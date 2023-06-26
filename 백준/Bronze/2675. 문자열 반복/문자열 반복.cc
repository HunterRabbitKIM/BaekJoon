#include <iostream>
using namespace std;

int main()
{
    int T;
    int r;
    string s;
    
    cin>> T;
    for(int i = 0; i<T; i++)
    {
        cin >> r >> s;
        for(int k = 0; k < s.length(); k++)
        {
            for(int j = 0; j < r; j++)
            {
                cout << s[k];
            }
            
        }
        cout << endl;
        
    }
    
}