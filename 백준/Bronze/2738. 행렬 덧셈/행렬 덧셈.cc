#include <iostream>
using namespace std;

int main()
{
    int arrA[101][101]={0,};
    int arrB[101][101]={0,};
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arrA[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arrB[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arrA[i][j]+arrB[i][j] << " ";
        }
    }
    
    
    
}