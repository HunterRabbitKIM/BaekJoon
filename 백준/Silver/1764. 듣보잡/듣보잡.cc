#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    vector<string> name1;
    vector<string> result;
    string str1;
    string str2;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str1;
        name1.push_back(str1);
    }
    
    sort(name1.begin(), name1.end());
    
    for(int i = 0; i < m; i++)
    {
        cin >> str2;
        if(binary_search(name1.begin(), name1.end(), str2))
        {
            result.push_back(str2);
        }
    }
    sort(result.begin(), result.end());
    
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++)
    {
        
        cout << result[i] << endl;
    }
}