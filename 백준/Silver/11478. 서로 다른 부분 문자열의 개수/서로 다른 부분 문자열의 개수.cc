#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    string num = "";
    
    cin >> str;
    
    set<string> count;
    
    for(int i = 0; i < str.size(); i++)
    {
        for(int j = i; j < str.size(); j++)
        {
            num += str[j];
            count.insert(num);
        }
        num = "";
    }
    
    cout << count.size();
    
}